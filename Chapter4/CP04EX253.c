#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a = 34, b = 34, c = 78;
    int d, e, f;

    d = a && b;
    e = a || c;
    f = a && c;

    printf("%d && %d = %d\n", a, b, d);
    printf("%d || %d = %d\n", a, c, e);
    printf("%d && %d = %d\n", a, c, f);
}