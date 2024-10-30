#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a = 6, b = 9, c = 0;
    int d, e, f;
    d = a && b; // 请设置断点后单步调试，观察各变量的变化过程
    e = a || b;
    f = a && c;
    printf("%d && %d = %d\n", a, b, d);
    printf("%d || %d = %d\n", a, b, e);
    printf("%d && %d = %d\n", a, c, f);
}