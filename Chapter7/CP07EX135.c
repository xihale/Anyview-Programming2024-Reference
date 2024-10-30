#include "allinclude.h" // DO NOT edit this line

int func(int n)
{
    // 计算 n 的位数
    int k = log10(n) + 1;

    // 求出由低 k-1 位构成的数
    int result = n % (int)pow(10, k - 1);

    return result;
}
