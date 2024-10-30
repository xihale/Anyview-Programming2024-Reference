#include "allinclude.h" // DO NOT edit this line

int gdc(int m, int n)
{
    // 检查 m 和 n 是否为正整数
    if (m <= 0 || n <= 0)
    {
        return -1;
    }

    // 使用欧几里得算法计算最大公约数
    while (n != 0)
    {
        int temp = m % n;
        m = n;
        n = temp;
    }

    return m;
}
