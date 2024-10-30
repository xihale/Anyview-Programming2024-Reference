#include "allinclude.h"

int main()
{
    int a = 7, b = 11;
    int c, d, e;
    c = a & b;
    d = a | b;
    e = a ^ b;
    printf("%d&%d=%d\n", a, b, c);
    printf("%d|%d=%d\n", a, b, d);
    printf("%d^%d=%d\n", a, b, e);
}