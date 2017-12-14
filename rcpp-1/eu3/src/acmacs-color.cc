#include <Rcpp.h>

#include "acmacs-base/color.hh"

RCPP_MODULE(acmacs)
{
    using namespace Rcpp;
    class_<Color>("acmacs.Color")
            .constructor()
            .constructor<std::string>()
            .property("hex", static_cast<std::string (*)(Color*)>([](Color* c) { return c->to_hex_string(); }), "hex representation of the color")
            .property("name", static_cast<std::string (*)(Color*)>([](Color* c) { return c->to_string(); }), "named representation of the color")
            ;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
