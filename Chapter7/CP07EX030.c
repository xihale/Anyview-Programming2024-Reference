#include "allinclude.h" //DO NOT edit this line

// 判断素数，如果是素数返回1，不是素数则返回0
int prime(int n)
{
    if (n <= 1)
        return 0; // 0 和 1 不是素数
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0; // 有其他因数，不是素数
    }
    return 1; // 是素数
}

// 将偶数i表示为两个素数之和，返回其中较小的素数
int f(int i)
{
    for (int j = 2; j <= i / 2; j++)
    {
        if (prime(j) && prime(i - j))
        {
            return j; // 找到一个素数对 (j, i - j)，返回较小的 j
        }
    }
    return -1; // 如果没有找到符合条件的两个素数之和
}
