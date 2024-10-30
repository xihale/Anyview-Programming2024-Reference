#include "allinclude.h"

int main()
{
    int a = 5, b = 12, c = 4;
    int er, ok;
    er = a & b | a ^ c;     // 不符合题意
    ok = (a | b) & (a ^ c); // 注意运算的优先级和括号的使用
    printf("%d|%d&%d^%d=%d   error\n", a, b, a, c, er);
    printf("(%d|%d)&(%d^%d)=%d  ok\n", a, b, a, c, ok);
}