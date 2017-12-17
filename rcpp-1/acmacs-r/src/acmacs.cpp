#include <Rcpp.h>

#include "acmacs-chart-2/chart.hh"
#include "acmacs-chart-2/factory-import.hh"

// ----------------------------------------------------------------------

namespace acmacs_r
{
    template <typename T> class wrapper
    {
     public:
        using owning_t = T;
        inline wrapper() = default;
        inline wrapper(std::shared_ptr<T> obj) : obj_(obj) {}
        inline std::shared_ptr<T> operator*() { return obj_; }
        std::shared_ptr<T> obj_;

        template <auto (T::*property)() const> auto getter() const
            {
                return ((*obj_).*property)();
            }

    }; // class wrapper<>

    class Chart : public wrapper<acmacs::chart::Chart>
    {
     public:
        inline Chart(std::string aFilename) : wrapper(acmacs::chart::import_factory(aFilename, acmacs::chart::Verify::None)) {}

    }; // class Chart

} // namespace acmacs_r

// ----------------------------------------------------------------------

RCPP_MODULE(acmacs)
{
    using namespace Rcpp;

    class_<acmacs_r::Chart>("acmacs.Chart")
            .constructor<std::string>()
            .property<size_t>("number_of_antigens", &acmacs_r::Chart::getter<&acmacs::chart::Chart::number_of_antigens>, "number_of_antigens")
            .property<size_t>("number_of_sera", &acmacs_r::Chart::getter<&acmacs::chart::Chart::number_of_sera>, "number_of_sera")
            ;

}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
