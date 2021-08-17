#pragma once

// #include <optional>
// #include <tuple>
// #include <vector>
// #include <utility>

#pragma GCC diagnostic push
#ifdef __clang__
// 8.0.1
#pragma GCC diagnostic ignored "-Wdocumentation-unknown-command"
#pragma GCC diagnostic ignored "-Wsigned-enum-bitfield" // fmt/format.h
#pragma GCC diagnostic ignored "-Wmissing-noreturn" // fmt/core.h
#pragma GCC diagnostic ignored "-Wundefined-func-template" // fmt/chrono.h:1182

// #pragma GCC diagnostic ignored "-Wextra-semi-stmt" // fmt/format.h:1242
// #pragma GCC diagnostic ignored "-Wsign-conversion" // fmt/format.h:2699
// #pragma GCC diagnostic ignored "-Wdouble-promotion" // fmt/core.h:769
// #pragma GCC diagnostic ignored "-Wshadow" // fmt/chrono.h
// #pragma GCC diagnostic ignored "-Wshadow-field" // fmt/core.h
// #pragma GCC diagnostic ignored "-Wundef" // fmt/core.h
// #pragma GCC diagnostic ignored "-Wunused-template" // fmt/chrono.h
// #pragma GCC diagnostic ignored "-Wnon-virtual-dtor" // fmt/core.h


// clang 11
// #pragma GCC diagnostic ignored "-Wsuggest-override"
// #pragma GCC diagnostic ignored "-Wsuggest-destructor-override"

// #pragma GCC diagnostic ignored ""
// #pragma GCC diagnostic ignored ""
// #pragma GCC diagnostic ignored ""
#endif

#ifdef __GNUG__
#pragma GCC diagnostic ignored "-Wdeprecated" // fmt/format.h: implicit capture of ‘this’ via ‘[=]’ is deprecated in C++20
#endif

#include <fmt/format.h>
#include <fmt/ranges.h>
#include <fmt/chrono.h>

#pragma GCC diagnostic pop


// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
