// 1.cpp

#include <iostream>
using namespace std;

// Template
template <typename T>
struct Fun_ {
    using type = T;
};

template <>
struct Fun_<int> {
    using type = long long int;
};

template <>
struct Fun_<double> {
    using type = long double;
};

template <typename T>
    using Fun = typename Fun_<T>::type;

int main()
{
    Fun_<int>::type a = 3;
    printf("%lld %ld\n", a, sizeof(a));

    Fun_<double>::type b = 3.0;
    printf("%Lf %ld\n", b, sizeof(b));

    Fun<int> d = 3;
    printf("%lld %ld\n", d, sizeof(d));

    Fun<double> e = 3.0;
    printf("%Lf %ld\n", e, sizeof(e));

    return 0;
}


