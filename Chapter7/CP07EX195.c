#include "allinclude.h" // DO NOT edit this line

double factorial(int x)
{
    double result = 1.0;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

float func(int m, int n)
{
    double m_fact = factorial(m);
    double n_fact = factorial(n);
    double mn_fact = factorial(m - n);

    double result = m_fact / (n_fact * mn_fact);
    return (float)result;
}
