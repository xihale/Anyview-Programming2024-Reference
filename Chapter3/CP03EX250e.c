#include "allinclude.h"
int main()
{
    int a = 6, b = 9, c = 0;
    int d, e, f;
    d = a && b;
    e = a || b;
    f = a && c;
    printf("%d&&%d = %d\n", a, b, d);
    printf("%d||%d = %d\n", a, b, e);
    printf("%d&&%d = %d\n", a, c, f);
}