#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b, c;
    scanf("%d,%d", &a, &b);
    if (a <= b)
    { // 请单步调试，观察所执行的语句对各变量的影响
        c = a * b;
        printf("%d*%d=%d\n", a, b, c);
    }
    else
    {
        c = a / b;
        printf("%d/%d=%d\n", a, b, c);
    }
}