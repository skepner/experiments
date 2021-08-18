#include <numeric>
#include <vector>
#include <concepts>
#include "ext/fmt.hh"
#include "ext/xlnt.hh"
#include "ext/range-v3.hh"

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
    fmt::print("sizeof(std::string): {}\n", sizeof(std::string));
    fmt::print("range-v3: {}\n", ranges::views::ints(0, 10) | ranges::to<std::vector>);
    // er;

    xlnt::workbook wb;
    wb.load("empty.xlsx");
    const auto ws = wb.active_sheet();
    fmt::print("{}\n", ws.cell(1, 1).value<std::string>());
    return 0;
}

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
