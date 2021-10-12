#include <array>
#include <vector>
#include "ext/fmt.hh"
#include "ext/lexy.hh"

// ----------------------------------------------------------------------

void virus_name_parsing_test();

namespace ae::virus::name
{
    struct Name
    {
        std::string subtype{};
        std::string host{};
        std::string location{};
        std::string isolation{};
        std::string year{};
        std::string reassortant{};
        std::string extra{};
    };

    struct part_t
    {
        enum type { undef, subtype, alpha, alpha_digits, digits_alpha, digits, other };

        std::string text{};
        enum type type{undef};
        int _padding{0};             // avoid warning
    };

    using parts_t = std::array<part_t, 8>;

    namespace grammar
    {
        namespace dsl = lexy::dsl;

        static constexpr auto A = dsl::lit_c<'A'>;
        static constexpr auto B = dsl::lit_c<'B'>;
        static constexpr auto H = dsl::lit_c<'H'>;
        static constexpr auto N = dsl::lit_c<'N'>;
        static constexpr auto OPEN = dsl::lit_c<'('>;
        static constexpr auto CLOSE = dsl::lit_c<')'>;
        static constexpr auto UNDERLINE = dsl::lit_c<'_'>;

        template <typename T> inline void print_type(T&& val, std::string_view name) { fmt::print("{}: {}\n", name, typeid(val).name());
            if constexpr (! std::is_same_v<std::decay_t<T>, lexy::nullopt>) { fmt::print("{}: \"{}\"\n", name, val); }
        }

        template <typename T> inline std::string to_string(const lexy::lexeme<T>& lexeme) { return {lexeme.begin(), lexeme.end()}; }

        struct subtype_a
        {
            // H3N2 | H3
            struct hn
            {
                static constexpr auto rule = dsl::peek(H) >> dsl::capture(H + dsl::digits<>) + dsl::opt(dsl::peek(N) >> dsl::capture(N + dsl::digits<>));
                static constexpr auto value = lexy::callback<std::string>(    //
                    [](auto lex1, lexy::nullopt) { return to_string(lex1); }, //
                    [](auto lex1, auto lex2) {
                        return std::string{lex1.begin(), lex2.end()};
                    } //
                );
            };

            // A | AH3 | AH3N2 | A(H3N2) | A(H3)
            static constexpr auto rule = A >> dsl::opt(dsl::p<hn> | OPEN >> dsl::p<hn> + CLOSE);
            static constexpr auto value = lexy::callback<part_t>( //
                [](lexy::nullopt) {
                    return part_t{"A", part_t::subtype};
                }, //
                [](const std::string& a1) {
                    return part_t{fmt::format("A({})", a1), part_t::subtype};
                }
            );
        };

        struct subtype_b
        {
            static constexpr auto rule = B;
            static constexpr auto value = lexy::callback<part_t>([]() { return part_t{"B", part_t::subtype}; });
        };

        struct alpha
        {
            static constexpr auto symbol = dsl::ascii::alpha / UNDERLINE / dsl::hyphen / dsl::ascii::blank;
            static constexpr auto rule = dsl::lookahead(symbol, dsl::slash) >> dsl::capture(dsl::while_(symbol));
            static constexpr auto value = lexy::callback<part_t>([](auto lexeme) { return part_t{to_string(lexeme), part_t::alpha}; });
        };

        struct alpha_digits
        {
            static constexpr auto symbol = dsl::ascii::alpha / dsl::ascii::digit / UNDERLINE / dsl::hyphen;
            static constexpr auto rule = dsl::peek(dsl::ascii::alpha + dsl::lookahead(symbol, dsl::slash)) >> dsl::capture(dsl::while_(symbol));
            static constexpr auto value = lexy::callback<part_t>([](auto lexeme) { return part_t{to_string(lexeme), part_t::alpha_digits}; });
        };

        struct digits_alpha
        {
            static constexpr auto rule = dsl::peek(dsl::ascii::digit + dsl::lookahead(dsl::ascii::alpha, dsl::slash)) >> dsl::capture(dsl::ascii::digit + dsl::while_(dsl::ascii::alpha / dsl::ascii::digit / UNDERLINE / dsl::hyphen));
            static constexpr auto value = lexy::callback<part_t>([](auto lexeme) { return part_t{to_string(lexeme), part_t::digits_alpha}; });
        };

        struct digits
        {
            static constexpr auto rule = dsl::peek(dsl::ascii::digit) >> dsl::capture(dsl::digits<>) + LEXY_DEBUG("digits-matched");
            static constexpr auto value = lexy::callback<part_t>([](auto lexeme) { return part_t{to_string(lexeme), part_t::digits}; });
        };

        struct tail_parts
        {
            static constexpr auto rule = dsl::list(dsl::p<alpha_digits> | dsl::p<digits_alpha> | dsl::p<digits> | dsl::else_ >> dsl::p<alpha>, dsl::sep(dsl::slash));
            static constexpr auto value = lexy::as_list<std::vector<part_t>>;
        };

        struct parts
        {
            static constexpr auto whitespace = dsl::ascii::blank; // auto skip whitespaces
            static constexpr auto rule = (dsl::p<subtype_a> | dsl::p<subtype_b>) + dsl::slash + dsl::p<tail_parts> + dsl::eof;

            static constexpr auto value = lexy::callback<parts_t>(
                [](auto subtype, auto rest) {
                    parts_t parts{subtype};
                    std::move(std::begin(rest), std::end(rest), std::next(std::begin(parts)));
                    return parts;
                }
            );
        };
    } // namespace grammar

    Name parse(std::string_view source);

} // namespace ae::virus::name

// ----------------------------------------------------------------------

template <> struct fmt::formatter<enum ae::virus::name::part_t::type> : fmt::formatter<eu::fmt_helper::default_formatter> {
    template <typename FormatCtx> auto format(const enum ae::virus::name::part_t::type& value, FormatCtx& ctx)
    {
        using namespace ae::virus::name;
        switch (value) {
            case part_t::undef:
                return format_to(ctx.out(), "undef");
            case part_t::subtype:
                return format_to(ctx.out(), "subtype");
            case part_t::alpha:
                return format_to(ctx.out(), "alpha");
            case part_t::alpha_digits:
                return format_to(ctx.out(), "alpha_digits");
            case part_t::digits_alpha:
                return format_to(ctx.out(), "digits_alpha");
            case part_t::digits:
                return format_to(ctx.out(), "digits");
            case part_t::other:
                return format_to(ctx.out(), "other");
        }
        return ctx.out();
    }
};

template <> struct fmt::formatter<ae::virus::name::part_t> : fmt::formatter<eu::fmt_helper::default_formatter> {
    template <typename FormatCtx> auto format(const ae::virus::name::part_t& value, FormatCtx& ctx)
    {
        return format_to(ctx.out(), "<{}>\"{}\"", value.type, value.text);
    }
};


// ----------------------------------------------------------------------

ae::virus::name::Name ae::virus::name::parse(std::string_view source)
{
        fmt::print(">>> parsing \"{}\"\n", source);
        lexy::trace<grammar::parts>(stderr, lexy::string_input{source});
        const auto result = lexy::parse<grammar::parts>(lexy::string_input{source}, lexy_ext::report_error);
        fmt::print("    {}\n", result.value());
        return {};
}

// ----------------------------------------------------------------------

struct TestData
{
    std::string raw_name;
    std::string dummy;
    // to_compare_t expected;
};


void virus_name_parsing_test()
{
    const std::array data{
        TestData{"A/BRISBANE/01/2018  NYMC-X-311 (18/160)",                            {}}, // to_compare_t{A,              H,            "BRISBANE", "1", "2018", Reassortant{"NYMC-311"}, P, E}}, // "(18/160)" removed by check_nibsc_extra
        TestData{"A/SINGAPORE/INFIMH-16-0019/2016",                                    {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A(H3N2)/SINGAPORE/INFIMH-16-0019/2016",                              {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A(H3N2) / SINGAPORE /INFIMH-16-0019/2016",                              {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A(H3)/SINGAPORE/INFIMH-16-0019/2016",                              {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"AH3N2/SINGAPORE/INFIMH-16-0019/2016",                                {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/H3N2/SINGAPORE/INFIMH-16-0019/2016",                                {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/HUMAN/SINGAPORE/INFIMH-16-0019/2016",                                {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/SINGAPORE/INFIMH-16-0019/16",                                      {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/ SINGAPORE/INFIMH-16-0019/16",                                     {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/SINGAPORE /INFIMH-16-0019/16",                                     {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A/SOUTH AFRICA/19/16",                                     {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        TestData{"A / SOUTH AFRICA/19/16",                                     {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, P, E}},
        // TestData{"A/SINGAPORE/INFIMH-16-0019/2016 CL2  X-307A",                        {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", Reassortant{"NYMC-307A"}, P, "CL2"}},
        // TestData{"A/SINGAPORE/INFIMH-16-0019/2016 NEW CL2  X-307A",                    {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", Reassortant{"NYMC-307A"}, P, "CL2"}},
        // TestData{"A/SINGAPORE/INFIMH-16-0019/2016 CL2 NEW X-307A",                     {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", Reassortant{"NYMC-307A"}, P, "CL2"}},
        // TestData{"A/SINGAPORE/INFIMH-16-0019/2016 CL2  X-307A NEW",                    {}}, // to_compare_t{A,              H,            "SINGAPORE", "INFIMH-16-0019",   "2016", Reassortant{"NYMC-307A"}, P, "CL2"}},
        // TestData{"AH3N2/SINGAPORE/INFIMH-16-0019/2016 MDCK1",                          {}}, // to_compare_t{typ{"A(H3N2)"}, H,            "SINGAPORE", "INFIMH-16-0019",   "2016", R, Passage{"MDCK1"}, E}},
        // TestData{"A/Snowy Sheathbill/Antarctica/2899/2014",                            {}}, // to_compare_t{A,              hst{"SNOWY SHEATHBILL"}, "ANTARCTICA", "2899", "2014", R, P, E}},
        // TestData{"A/wigeon/Italy/6127-23/2007",                                        {}}, // to_compare_t{A,              hst{"WIGEON"}, "ITALY", "6127-23", "2007", R, P, E}},
        // TestData{"B/Via?A Del Mar/73490/2017",                                         {}}, // to_compare_t{B,              H,            "VINA DEL MAR", "73490", "2017", R, P, E}},
        // TestData{"B/Cameroon11V-12080 GVFI/2011",                                      {}}, // to_compare_t{B,              H,            "CAMEROON", "11V-12080 GVFI", "2011", R, P, E}},
        // TestData{"A/Mali 071 Ci/2015",                                                 {}}, // to_compare_t{A,              H,            "MALI", "71 CI", "2015", R, P, E}},
        // TestData{"A/Zambia/13/174/2013",                                               {}}, // to_compare_t{A,              H,            "ZAMBIA", "13-174", "2013", R, P, E}},
        // TestData{"A/Lyon/CHU18.54.48/2018",                                            {}}, // to_compare_t{A,              H,            "LYON CHU", "18.54.48", "2018", R, P, E}},
        // TestData{"A/Lyon/CHU/R18.54.48/2018",                                          {}}, // to_compare_t{A,              H,            "LYON CHU", "R18.54.48", "2018", R, P, E}},
        // TestData{"A/Algeria/G0281/16/2016",                                            {}}, // to_compare_t{A,              H,            "ALGERIA", "G0281-16", "2016", R, P, E}},
        // TestData{"A/chicken/Ghana/7/2015",                                             {}}, // to_compare_t{A,              hst{"CHICKEN"}, "GHANA", "7", "2015", R, P, E}},
        // TestData{"IVR-153 (A/CALIFORNIA/07/2009)",                                     {}}, // to_compare_t{A,              H,            "CALIFORNIA", "7", "2009", Reassortant{"IVR-153"}, P, E}},
        // TestData{"A/Antananarivo/1067/2016 CBER-11B C1.3",                             {}}, // to_compare_t{A,              H,            "ANTANANARIVO", "1067", "2016", Reassortant{"CBER-11B"}, P, "C1.3"}}, // CDC
        // TestData{"A/Montana/50/2016 CBER-07 D2.3",                                     {}}, // to_compare_t{A,              H,            "MONTANA", "50", "2016", Reassortant{"CBER-07"}, P, "D2.3"}}, // CDC
        // TestData{"A/duck/Guangdong/4.30 DGCPLB014-O/2017",                             {}}, // to_compare_t{A,              hst{"DUCK"},  "GUANGDONG", "4.30 DGCPLB014-O", "2017", R, P, E}},
        // TestData{"A/duck/Guangdong/02.11 DGQTXC195-P/2015(Mixed)",                     {}}, // to_compare_t{A,              hst{"DUCK"},  "GUANGDONG", "2.11 DGQTXC195-P", "2015", R, P, E}}, // (MIXED) removed
        // TestData{"A/duck/Guangdong/02.11 DGQTXC195-P/2015(H5N1)",                      {}}, // to_compare_t{typ{"A(H5N1)"}, hst{"DUCK"},  "GUANGDONG", "2.11 DGQTXC195-P", "2015", R, P, E}},
        // TestData{"A/swine/Chachoengsao/2003",                                          {}}, // to_compare_t{A,              hst{"SWINE"}, "CHACHOENGSAO", "UNKNOWN", "2003", R, P, E}},

        // // nbci -- genbank
        // TestData{"A/Anas platyrhynchos/Belgium/17330 2/2013",                          {}}, // to_compare_t{A, hst{"MALLARD"}, "BELGIUM", "17330 2", "2013", R, P, E}},
        // // TestData{"A/mallard/Balkhash/6304_HA/2014",                                 {}}, //    to_compare_t{A, hst{"MALLARD"}, "BALKHASH", "6304", "2014"}, R, P, E}},
        // TestData{"A/mallard/Balkhash/6304_HA/2014",                                    {}}, // to_compare_t{A, hst{"MALLARD"}, "BALKHASH", "6304", "2014", R, P, E}}, // _HA is seqgment reference in ncbi
        // // TestData{"A/SWINE/NE/55024/2018",                                           {}}, //    to_compare_t{A, hst{"SWINE"},   "NE", "55024", "2018", R, P, E}},
        // TestData{"A/chicken/Iran221/2001",                                             {}}, // to_compare_t{A, hst{"CHICKEN"}, "IRAN", "221", "2001", R, P, E}},
        // TestData{"A/BiliranTB5/0423/2015",                                             {}}, // to_compare_t{A, H,                 "BILIRAN",  "TB5-0423", "2015", R, P, E}},
        // TestData{"A/chicken/Yunnan/Kunming/2007",                                      {}}, // to_compare_t{A, hst{"CHICKEN"}, "YUNNAN KUNMING", "UNKNOWN", "2007", R, P, E}},

        // // gisaid
        // TestData{"A/Flu-Bangkok/24/19",                                                {}}, // to_compare_t{A,               H, "BANGKOK", "24", "2019", R, P, E}},
        // TestData{"A(H1)//ARGENTINA/FLE0116/2009",                                      {}}, // to_compare_t{typ{"A(H1)"},    H, "ARGENTINA", "FLE0116", "2009", R, P, E}},
        // TestData{"A/FriuliVeneziaGiuliaPN/230/2019",                                   {}}, // to_compare_t{A,               H, "FRIULI-VENEZIA GIULIA PN", "230", "2019", R, P, E}},
        // TestData{"A/turkey/Netherlands/03010496/03 clone-C12",                         {}}, // to_compare_t{A,               hst{"TURKEY"}, "NETHERLANDS", "3010496", "2003", R, P, "CLONE-C12"}},
        // TestData{"A/reassortant/IDCDC-RG22(New York/18/2009 x Puerto Rico/8/1934)",    {}}, // to_compare_t{A, H, "NEW YORK", "18", "2009", Reassortant{"RG-22"}, P, E}},
        // TestData{"A/reassortant/IgYRP13.c1(California/07/2004 x Puerto Rico/8/1934)",  {}}, // to_compare_t{A, H, "CALIFORNIA", "7", "2004", Reassortant{"IGYRP13.C1"}, P, E}},
        // TestData{"A/REASSORTANT/X-83(CHILE/1/1983 X X-31)(H1N1)",                      {}}, // to_compare_t{typ{"A(H1N1)"},  H, "CHILE", "1", "1983", Reassortant{"NYMC-83 NYMC-31"}, P, E}},
        // TestData{"A/X-53A(Puerto Rico/8/1934-New Jersey/11/1976)",                     {}}, // to_compare_t{A,               H, "NEW JERSEY", "11", "1976", Reassortant{"NYMC-53A"}, P, E}},
        // TestData{"A/Anas platyrhynchos/bonn/7/03(H2N?)",                               {}}, // to_compare_t{typ{"A(H2)"},    hst{"MALLARD"}, "BONN", "7", "2003", R, P, E}},
        // TestData{"A/California/7/2004 (cell-passaged)(H3)",                            {}}, // to_compare_t{typ{"A(H3)"},    H, "CALIFORNIA", "7", "2004", R, Passage{"MDCK?"}, E}},
        // TestData{"A/California/7/2004 (egg-passaged)(H3)",                             {}}, // to_compare_t{typ{"A(H3)"},    H, "CALIFORNIA", "7", "2004", R, Passage{"E?"}, E}},
        // TestData{"A/QUAIL/some unknown location/0025/2016(H5N1)",                      {}}, // to_compare_t{typ{"A(H5N1)"},  hst{"QUAIL"}, "SOME UNKNOWN LOCATION", "25", "2016", R, P, E}}, // DELISERDANG is unknown location
        // TestData{"A/Medellin/FLU8292/2007(H3)",                                        {}}, // to_compare_t{typ{"A(H3)"},    H, "MEDELLIN", "FLU8292", "2007", R, P, E}}, // Medellin is unknown location
        // TestData{"A/turkey/Italy12rs206-2/1999(H7N1)",                                 {}}, // to_compare_t{typ{"A(H7N1)"},  hst{"TURKEY"}, "ITALY", "12RS206-2", "1999", R, P, E}},
        // TestData{"A/Michigan/382/2018(H1N2v)",                                         {}}, // to_compare_t{typ{"A(H1N2V)"}, H, "MICHIGAN", "382", "2018", R, P, E}},
        // TestData{"A/mallard/Washington/454202-15/2006(H5N2?)",                         {}}, // to_compare_t{A,               hst{"MALLARD"}, "WASHINGTON", "454202-15", "2006", R, P, E}},
        // TestData{"A/quail/Bangladesh/32270/2017(mixed,H9)",                            {}}, // to_compare_t{A,               hst{"QUAIL"}, "BANGLADESH", "32270", "2017", R, P, E}},
        // TestData{"A/ruddy turnstone/Delaware/1016389/2003(HxN3)",                      {}}, // to_compare_t{typ{"A(N3)"},    hst{"RUDDY TURNSTONE"}, "DELAWARE", "1016389", "2003", R, P, E}},
        // TestData{"A/ruddy turnstone/New Jersey/1321401/2005(HxNx)",                    {}}, // to_compare_t{A,               hst{"RUDDY TURNSTONE"}, "NEW JERSEY", "1321401", "2005", R, P, E}},
        // TestData{"A/duck/ukraine/1/1960(H11N)",                                        {}}, // to_compare_t{typ{"A(H11)"},   hst{"DUCK"}, "UKRAINE", "1", "1960", R, P, E}},
        // TestData{"A/ruddy turnstone/Delaware Bay/85/2017(mixed.H5)",                   {}}, // to_compare_t{A,               hst{"RUDDY TURNSTONE"}, "DELAWARE BAY", "85", "2017", R, P, E}},
        // TestData{"A/Michigan/1/2010(HON1)",                                            {}}, // to_compare_t{typ{"A(N1)"},    H, "MICHIGAN", "1", "2010", R, P, E}},
        // TestData{"A/some location/57(H2N2)",                                           {}}, // to_compare_t{typ{"A(H2N2)"},  H, "SOME LOCATION", "UNKNOWN", "1957", R, P, E}},
        // TestData{"A/California/07/2009 NIBRG-121xp (09/268)",                          {}}, // to_compare_t{A,               H, "CALIFORNIA", "7", "2009", Reassortant{"NIB-121XP"}, P, E}},
        // TestData{"A/turkey/Bulgaria/Haskovo/336/2018",                                 {}}, // to_compare_t{A,               hst{"TURKEY"}, "HASKOVO", "336", "2018", R, P, E}},

        // TestData{"A/BONN/2/2020_PR8-HY-HA-R142G-HA-K92R/Y159F/K189N",                  {}}, // to_compare_t{A,               H, "BONN", "2", "2020", Reassortant{"PR8"}, P, E}},

        // TestData{"",                   to_compare_t{typ{""}, hst{""}, "", R, P, E}},
    };

    // size_t errors = 0;
    for (const auto& entry : data) {
        try {
            // AD_DEBUG("{}", entry.raw_name);
            const auto result = ae::virus::name::parse(entry.raw_name);
            // if (result != entry.expected) {
            //     AD_ERROR("{} <-- \"{}\"  expected: \"{}\"", result, entry.raw_name, entry.expected);
            //     ++errors;
            // }
            // else if (!result.messages.empty()) {
            //     acmacs::messages::report_by_type(result.messages);
            //     AD_INFO("{}", result);
            // }
        }
        catch (std::exception& err) {
            fmt::print("> {}: {}", entry.raw_name, err.what());
            throw;
        }
    }

    // if (errors)
    //     throw std::runtime_error{fmt::format("test_builtin: {} errors found", errors)};

}

// ----------------------------------------------------------------------
