# 基本技巧

## 元函数

1. 元函数：必须满足无副作用的限制，即可作为原函数使用。

关键字为 `constexpr` 为 C++11 中的关键字，表明这个函数可以在编译期被调用。如果去掉这个关键字，该函数只能在运行期被调用。

> `constexpr` 全称为 *const expression*，即常数表达，在无副作用的限制下，该函数返回值必定为常数。与 `const` 的不同在于，`constexpr` 可以用来声明函数或者类构造函数，并在有可能的情况下则在编译期进行编译。

```c
// constexpr.cpp

#include <iostream>
using namespace std;

constexpr int fun(int a) {
    return a + 1;
}

int main()
{
    printf("%d\n", fun(2));
    
    return 0;
}
```

## 类型元函数

类型元函数：函数的输入参数是类型，输出也是类型。


如下所示，代码中定义了 `Fun_` 函数，其中若输入 `int` 类型，则会映射 `long long int` 类型，若输入 `double` 类型，则会映射到 `long double` 类型。调用方法为 `Fun_<T>::type`。
```c
// 1.cpp
#include <iostream>
using namespace std;

//Template
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

int main()
{
    Fun_<int>::type h = 3;
    printf("%lld %ld\n", h, sizeof(h));


    return 0;
}

```
