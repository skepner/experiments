#pragma GCC diagnostic push
#ifdef __clang__

#pragma GCC diagnostic ignored "-Wreserved-identifier"
#pragma GCC diagnostic ignored "-Wpadded"
#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"
#pragma GCC diagnostic ignored "-Wredundant-parens"
// #pragma GCC diagnostic ignored "-Wshadow-uncaptured-local"
#pragma GCC diagnostic ignored "-Wshadow"

// https://github.com/foonathan/lexy/issues/15
#define __cpp_nontype_template_parameter_class __cpp_nontype_template_args

#ifndef __cpp_consteval
#  define __cpp_consteval 0
#endif

#ifndef NDEBUG
#  define NDEBUG 0
#endif


#include <lexy/callback.hpp>     // value callbacks
#include <lexy/dsl.hpp>          // lexy::dsl::*

#endif

#ifdef __GNUG__
// #pragma GCC diagnostic ignored "-Wdeprecated"
#endif

#pragma GCC diagnostic pop
