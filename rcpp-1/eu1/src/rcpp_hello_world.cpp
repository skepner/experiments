#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
List rcpp_hello_world()
{
    auto x = CharacterVector::create("name", "of") ;
    auto y = NumericVector::create( 1967.0, 1980.0 );
    auto z = List::create( x, y );
    return z;
}
