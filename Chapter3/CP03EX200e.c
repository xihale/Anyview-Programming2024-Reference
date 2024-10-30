#include "allinclude.h"

int main()
{
    int a = 52, b = 25;
    int c, d;
    c = ((a > b) ? a : b);
    d = ((a < b) ? a : b * b);
    printf("%d\n", c);
    printf("%d\n", d);
}