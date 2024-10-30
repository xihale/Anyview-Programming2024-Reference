#include "allinclude.h" // DO NOT edit this line

float func(int n)
{
    float sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * (i + 1));
    }

    return sum;
}
