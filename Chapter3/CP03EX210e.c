#include "allinclude.h"

int main()
{
    int a = 7, b = 11;
    int c, d;
    c = a >> 1; // c赋值为a的值右移1个二进位的结果
    d = b << 3; // d赋值为b的值左移3个二进位的结果
    printf("%d %d\n", c, d);
}