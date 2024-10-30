#include "allinclude.h"
int main()
{
    float a, b;
    a = 123.4567;
    b = 97531.68;
    printf("a=%f=%e\n", a, a); /*a=123.456700=1.234567e+002*/
    printf("b=%f=%e\n", b, b); /*b=97531.680000=9.753168e+004*/
}