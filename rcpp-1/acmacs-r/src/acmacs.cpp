#include <typeinfo>
#include <Rcpp.h>

#include "acmacs-chart-2/chart.hh"
#include "acmacs-chart-2/factory-import.hh"

// ----------------------------------------------------------------------

namespace acmacs_r
{
    template <typename T> class wrapper
    {
     public:
        // using owning_t = T;
        inline wrapper() = default;
        inline wrapper(std::shared_ptr<T> obj) : obj_(obj) {}
        inline ~wrapper() { Rprintf("~wrapper %s\n", typeid(this).name()); }
        // inline std::shared_ptr<T> operator*() { return obj_; }
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
        inline std::string name() const { return obj_->make_name(); }

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
            .property<size_t>("number_of_points", &acmacs_r::Chart::getter<&acmacs::chart::Chart::number_of_points>)
            .property<size_t>("number_of_projections", &acmacs_r::Chart::getter<&acmacs::chart::Chart::number_of_projections>)
            .property<std::string>("lineage", &acmacs_r::Chart::getter<&acmacs::chart::Chart::lineage>)
            .property<std::string>("info", &acmacs_r::Chart::getter<&acmacs::chart::Chart::make_info>, "multi-line string brifly describing data stored in the chart")
            .property<std::string>("name", &acmacs_r::Chart::name)
            ;

}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
