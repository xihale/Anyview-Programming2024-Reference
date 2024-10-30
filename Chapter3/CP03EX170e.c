#include "allinclude.h"

int main()
{
    int a = 2, b = 5, c = 6, d = 10;
    a += b;
    b -= c;
    c *= d;
    d /= a;
    a %= c;
    printf("%d %d %d %d %d\n", a, b, c, d, a); // 用空格分隔，在同一行显示各运算结果
}