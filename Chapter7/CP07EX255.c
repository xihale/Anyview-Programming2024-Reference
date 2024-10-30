#include "allinclude.h" // DO NOT edit this line

float factorial(int num)
{
    float result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

float func(float eps)
{
    float pi_over_2 = 1.0;
    float term;
    int n = 1;

    do
    {
        float numerator = factorial(n);
        float denominator = 1.0;

        for (int j = 1; j <= n; j++)
        {
            denominator *= (2 * j + 1);
        }

        term = numerator / denominator;
        pi_over_2 += term;
        n++;

    } while (term >= eps);

    return pi_over_2 * 2;
}
