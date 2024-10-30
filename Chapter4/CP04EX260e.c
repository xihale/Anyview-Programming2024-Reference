#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a = 1, b = 0;
    int c, d;
    c = !a; // 请单步调试，观察各变量的变化过程
    d = !b;
    printf("!%d = %d\n", a, c);
    printf("!%d = %d\n", b, d);
}