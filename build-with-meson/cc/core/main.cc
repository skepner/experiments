#include <numeric>
#include <vector>
#include <concepts>

#include <chrono>

#include "ext/fmt.hh"
#include "ext/xlnt.hh"
#include "ext/range-v3.hh"
#include "ext/lexy.hh"

// ----------------------------------------------------------------------

template <class T> concept Number = std::is_integral_v<T> || std::is_floating_point_v<T>;

template <Number N> constexpr double average(const std::vector<N>& data)
{
    return std::accumulate(data.begin(), data.end(), 0.0) / static_cast<double>(data.size());
}

// ----------------------------------------------------------------------

// namespace ast
// {
// struct address
// {
//     std::optional<std::string> display_name;
//     std::string                local_part;
//     std::string                domain;

//     // void print() const
//     // {
//     //     if (display_name)
//     //         std::printf("%s <%s@%s> ", display_name->c_str(), local_part.c_str(), domain.c_str());
//     //     else
//     //         std::printf("%s@%s ", local_part.c_str(), domain.c_str());
//     // }
// };

// struct message
// {
//     std::vector<address> from;
//     std::vector<address> to;
//     std::vector<address> cc;
//     std::string          subject;
//     std::string          body;

//     void print() const
//     {
//         fmt::print("From: {}\n", "from");
//         // for (auto& addr : from)
//         //     addr.print();
//         // std::putchar('\n');
//         // std::fputs("To: ", stdout);
//         // for (auto& addr : to)
//         //     addr.print();
//         // std::putchar('\n');
//         // std::fputs("Cc: ", stdout);
//         // for (auto& addr : cc)
//         //     addr.print();
//         // std::putchar('\n');
//         // std::printf("Subject:%s\n", subject.c_str());

//         // std::putchar('\n');

//         // std::printf("%s", body.c_str());
//     }
// };

// } // namespace ast

// namespace grammar
// {
//     namespace dsl = lexy::dsl;

//     struct message
//     {
//         static constexpr auto rule = dsl::newline; // dsl::p<fields> + dsl::newline + (LEXY_MEM(body) = dsl::p<body>);
//         static constexpr auto value = lexy::as_aggregate<ast::message>;
//     };
// } // namespace grammar

// ----------------------------------------------------------------------


int main()
{
    using namespace std::string_literals;
    fmt::print("{} [{}]\n", "hello", average(std::vector{1, 2, 3, 4, 5, 6, 7, 8}));
    fmt::print("sizeof(std::string): {}\n", sizeof(std::string));
    fmt::print("range-v3: {}\n", ranges::views::ints(0, 10) | ranges::to<std::vector>);
    // er;

    xlnt::workbook wb;
    // wb.load("empty.xlsx");
    const auto ws = wb.active_sheet();
    // fmt::print("{}\n", ws.cell(1, 1).value<std::string>());

    const auto today = floor<std::chrono::days>(std::chrono::system_clock::now());
    const std::chrono::year_month_day ymd{today};
    fmt::print("[{}] [{} {}->{:%b} {}]\n", today, static_cast<int>(ymd.year()), static_cast<unsigned>(ymd.month()), today, static_cast<unsigned>(ymd.day()));

    // auto message = lexy::parse<grammar::message>("a@a.a", lexy_ext::report_error);
    // message.print();

    return 0;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
