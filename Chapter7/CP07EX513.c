#include "allinclude.h" // DO NOT edit this line

long func(int a[], int n)
{
    long product = 1; // 初始化乘积变量为1
    int i;

    // 遍历数组的前 n 个元素并计算乘积
    for (i = 0; i < n; i++)
    {
        product *= a[i]; // 累乘每个元素的值
    }

    return product; // 返回乘积结果
}
