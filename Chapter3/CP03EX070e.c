#include "allinclude.h"

int main()
{
    int a, b, c, d;                        // 整形变量说明
    a = 215;                               // 赋值
    b = 9;                                 // 赋值
    c = a / b;                             // 将商赋给ｃ
    d = a % b;                             // 将余数赋给ｄ
    printf("%d/%d=%d...%d\n", a, b, c, d); // 显示
}