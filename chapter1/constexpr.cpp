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
