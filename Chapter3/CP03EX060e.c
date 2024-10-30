#include "allinclude.h" //DO NOT edit this line

int main()
{
    int a, b, sum, min, tim, sep; // 整形变量说明
    a = 15;                       // 赋值
    b = 3;                        // 赋值
    sum = a + b;                  // 加
    min = a - b;                  // 减
    tim = a * b;                  // 乘
    sep = a / b;                  // 除
    printf("%d+%d=%d\n", a, b, sum);
    printf("%d-%d=%d\n", a, b, min);
    printf("%d*%d=%d\n", a, b, tim);
    printf("%d/%d=%d\n", a, b, sep);
}