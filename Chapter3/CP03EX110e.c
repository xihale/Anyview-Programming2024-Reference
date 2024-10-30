#include "allinclude.h"

int main()
{
    int a, b, c;
    a = b = 5, c = 8; // 对a和b重复赋值
    printf("%d*%d=%d\n", a, a, a * a);
    printf("%d*%d=%d\n", b, b, b * b);
    printf("%d*%d=%d\n", c, c, c * c);
}