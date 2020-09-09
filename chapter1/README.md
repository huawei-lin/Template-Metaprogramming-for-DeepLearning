## 元函数

1. 元函数：必须满足无副作用的限制，即可作为原函数使用。

关键字为 `constexpr` 为 C++11 中的关键字，表明这个函数可以在编译期被调用。如果去掉这个关键字，该函数只能在运行期被调用。

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
