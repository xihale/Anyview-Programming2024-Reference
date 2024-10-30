#include "allinclude.h"

int main()
{
    int a, b, c;
    a = 15;
    b = 10;
    c = (a + b) / (a - b);
    printf("(%d+%d)/(%d-%d)=%d\n", a, b, a, b, c); // 显示结果
}