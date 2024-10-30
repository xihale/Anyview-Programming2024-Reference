#include "allinclude.h" // DO NOT edit this line

float func(int n)
{
    float s = 1.0; // 初始值 s = 1
    int sum;

    for (int i = 2; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j; // 计算每项的分母
        }
        s += 1.0 / sum; // 累加当前项
    }

    return s;
}
