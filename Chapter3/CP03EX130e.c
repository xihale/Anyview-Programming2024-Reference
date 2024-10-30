#include "allinclude.h"

int main()
{
    float a, b, sum, min, tim, sep; // 实数型变量说明
    a = 789.456123;
    b = 28.2468;
    sum = a + b;
    min = a - b;
    tim = a * b;
    sep = a / b;

    printf("%f+%f=%f\n", a, b, sum);
    printf("%f-%f=%f\n", a, b, min);
    printf("%f*%f=%f\n", a, b, tim);
    printf("%f/%f=%f\n", a, b, sep);
}