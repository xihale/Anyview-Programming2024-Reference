#include "allinclude.h"
int main(int n, float pi2)
{ // Add your code here
    pi2 = 1.0;
    int numerator = 1;   // 定义分子
    int denominator = 1; // 定义分母
    for (int i = 1; i < n + 1; i++)
    {
        numerator *= i;
        denominator *= 2 * i + 1;
        pi2 += ((float)numerator / (float)denominator);
    }
    printf("n=%d,pi2=%f", n, pi2);
}