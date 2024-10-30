#include "allinclude.h"
int main()
{
    float a, b, sum, min, tim, sep;
    a = 543.3456;
    b = 23.4567;
    sum = a + b;
    min = a - b;
    tim = a * b;
    sep = a / b;
    printf("%10.4f+%10.4f=%10.4f\n", a, b, sum);
    printf("%10.2f-%10.2f=%10.2f\n", a, b, min);
    printf("%10.5f*%10.5f=%10.5f\n", a, b, tim);
    printf("%10.4f/%10.4f=%5.2f\n", a, b, sep);
}