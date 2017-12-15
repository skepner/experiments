#include <Rcpp.h>

#include "acmacs-chart-2/chart.hh"
#include "acmacs-chart-2/factory-import.hh"

// ----------------------------------------------------------------------

namespace acmacs_r
{
    template <typename T> class wrapper
    {
     public:
        inline wrapper() = default;
        inline wrapper(std::shared_ptr<T> obj) : obj_(obj) {}
        std::shared_ptr<T> obj_;

    }; // class wrapper<>

    class Chart : public wrapper<acmacs::chart::Chart>
    {
     public:
        inline Chart(std::string aFilename) : wrapper(acmacs::chart::import_factory(aFilename, acmacs::chart::Verify::None)) {}

        inline size_t number_of_antigens() const { return obj_->number_of_antigens(); }

        // template <typename F> size_t forward() { return 0; }


    }; // class Chart

    // template <typename F> inline size_t (*)(Chart*) ff(F func) { return [func](Chart* cw) std::bind F func; return func(*cw); }

} // namespace acmacs_r

// ----------------------------------------------------------------------

RCPP_MODULE(acmacs)
{
    using namespace Rcpp;

    class_<acmacs_r::Chart>("acmacs.Chart")
            .constructor<std::string>()
            .property("number_of_antigens", &acmacs_r::Chart::number_of_antigens)
            .property<size_t>("number_of_sera", &acmacs_r::ff<&acmacs::chart::Chart::number_of_sera>, "number_of_sera")
            ;

    // class_<Color>("acmacs.Color")
    //         .constructor()
    //         .constructor<std::string>()
    //         .property("hex", static_cast<std::string (*)(Color*)>([](Color* c) { return c->to_hex_string(); }), "hex representation of the color")
    //         .property("name", static_cast<std::string (*)(Color*)>([](Color* c) { return c->to_string(); }), "named representation of the color")
    //         ;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
