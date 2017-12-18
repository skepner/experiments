#include <typeinfo>
#include <Rcpp.h>

#include "acmacs-chart-2/chart.hh"
#include "acmacs-chart-2/factory-import.hh"

// ----------------------------------------------------------------------

template <typename T> class wrapper
{
 public:
    // using owning_t = T;
    inline wrapper() = default;
    inline wrapper(std::shared_ptr<T> obj) : obj_(obj) {}
      //inline ~wrapper() { Rprintf("~wrapper %s\n", typeid(this).name()); }
    // inline std::shared_ptr<T> operator*() { return obj_; }
    std::shared_ptr<T> obj_;

    template <auto (T::*property)() const> auto get() const
        {
            return ((*obj_).*property)();
        }

    template <typename R, auto (T::*property)() const> R getT() const
        {
            return ((*obj_).*property)();
        }

    template <typename Wrapper, auto (T::*property)() const> Rcpp::List getList() const
        {
            auto elements = ((*obj_).*property)();
            auto result = Rcpp::List::create();
            for (auto elt: *elements)
                result.push_back(Wrapper(elt));
            return result;
        }

}; // class wrapper<>

// ----------------------------------------------------------------------

RCPP_EXPOSED_CLASS(Chart);
class Chart : public wrapper<acmacs::chart::Chart>
{
 public:
    inline Chart(std::string aFilename) : wrapper(acmacs::chart::import_factory(aFilename, acmacs::chart::Verify::None)) {}
    inline std::string name() const { return obj_->make_name(); }

}; // class Chart

RCPP_EXPOSED_CLASS(Antigen);
class Antigen : public wrapper<acmacs::chart::Antigen>
{
 public:
    inline Antigen(acmacs::chart::AntigenP antigen) : wrapper(antigen) {}
};

RCPP_EXPOSED_CLASS(Serum);
class Serum : public wrapper<acmacs::chart::Serum>
{
 public:
    inline Serum(acmacs::chart::SerumP serum) : wrapper(serum) {}
};

// ----------------------------------------------------------------------

RCPP_MODULE(acmacs)
{
    using namespace Rcpp;

    class_<Chart>("acmacs.Chart")
            .constructor<std::string>("read chart data from a file")
            .property<size_t>("number_of_antigens", &Chart::get<&acmacs::chart::Chart::number_of_antigens>, "number_of_antigens")
            .property<size_t>("number_of_sera", &Chart::get<&acmacs::chart::Chart::number_of_sera>, "number_of_sera")
            .property<size_t>("number_of_points", &Chart::get<&acmacs::chart::Chart::number_of_points>)
            .property<size_t>("number_of_projections", &Chart::get<&acmacs::chart::Chart::number_of_projections>)
            .property<std::string>("lineage", &Chart::get<&acmacs::chart::Chart::lineage>)
            .property<std::string>("info", &Chart::get<&acmacs::chart::Chart::make_info>, "multi-line string brifly describing data stored in the chart")
            .property<std::string>("name", &Chart::name)
              // .property<Rcpp::List>("antigens", &Chart::antigens)
            .property<Rcpp::List>("antigens", &Chart::getList<Antigen, &acmacs::chart::Chart::antigens>)
            .property<Rcpp::List>("sera", &Chart::getList<Serum, &acmacs::chart::Chart::sera>)
            ;

    class_<Antigen>("acmacs.Antigen")
            .property<std::string>("name", &Antigen::getT<std::string, &acmacs::chart::Antigen::name>)
            ;

    class_<Serum>("acmacs.Serum")
            .property<std::string>("name", &Serum::getT<std::string, &acmacs::chart::Serum::name>)
            ;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
