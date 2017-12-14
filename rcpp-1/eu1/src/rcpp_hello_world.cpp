#include "rcpp.hh"

Rcpp::List rcpp_hello_world();

// [[Rcpp::export]]
Rcpp::List rcpp_hello_world()
{
    auto x = Rcpp::CharacterVector::create("name", "of") ;
    auto y = Rcpp::NumericVector::create( 1967.0, 1980.0 );
    auto z = Rcpp::List::create( x, y );
    return z;
}
