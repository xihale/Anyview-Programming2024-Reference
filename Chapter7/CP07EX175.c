#include "allinclude.h" // DO NOT edit this line
#include <math.h>

float func(int n)
{
    int sum = 0;

    // 求出小于 n 的能同时被 3 和 7 整除的所有自然数之和
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }

    // 返回和的平方根
    return sqrt(sum);
}
