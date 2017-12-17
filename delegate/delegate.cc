#include <iostream>
#include <memory>
#include <functional>

class AA
{
 public:
    virtual ~AA() { std::cout << "~AA" << '\n'; }

    size_t my() { std::cout << "AA::my" << '\n'; return 1967; }
    size_t your() { std::cout << "AA::your" << '\n'; return 1980; }
};

class WW
{
 public:
    inline WW(std::shared_ptr<AA> aa) : aa_(aa) {}
    AA& operator*() { return *aa_; }

 private:
    std::shared_ptr<AA> aa_;
};

// ----------------------------------------------------------------------

using WWFP = size_t (*)(WW*);
using AAFP = size_t (AA::*)();

// ----------------------------------------------------------------------

inline void reg(WWFP wwp)
{
    WW ww{std::make_shared<AA>()};
    const auto result = (*wwp)(&ww);
    std::cout << "register result: " << result << '\n';
}

template <auto (AA::*aafp)()> auto myT(WW* ww)
{
    return ((**ww).*aafp)();
}

template <typename ... Args, auto (AA::*aafp)(Args ...)> auto myTT(WW* ww, Args ... args)
{
    return ((**ww).*aafp)(args ...);
}

inline size_t myW(WW* ww)
{
    return (**ww).my();

} // myW

// ----------------------------------------------------------------------

// ----------------------------------------------------------------------


int main()
{
    using namespace std::placeholders;
    reg(&myW);
    reg(&myT<&AA::your>);
    return 0;

} // main

// ----------------------------------------------------------------------
/// Local Variables:
/// eval: (if (fboundp 'eu-rename-buffer) (eu-rename-buffer))
/// End:
