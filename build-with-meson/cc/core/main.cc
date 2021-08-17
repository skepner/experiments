#include <numeric>
#include <vector>
#include <concepts>
#include "ext/fmt.hh"
#include "ext/xlnt.hh"

// ----------------------------------------------------------------------

template <class T> concept Number = std::is_integral_v<T> || std::is_floating_point_v<T>;

template <Number N> constexpr double average(const std::vector<N>& data)
{
    return std::accumulate(data.begin(), data.end(), 0.0) / static_cast<double>(data.size());
}

// ----------------------------------------------------------------------

int main()
{
    using namespace std::string_literals;
    fmt::print("{} [{}]\n", "hello", average(std::vector{1, 2, 3, 4, 5, 6, 7, 8}));
    // er;
    return 0;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
