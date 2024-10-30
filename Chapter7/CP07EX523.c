#include "allinclude.h" // DO NOT edit this line

long func(int a[], int n)
{
    long sum = 0; // 初始化平方和变量为0
    int i;

    // 遍历数组的前 n 个元素并计算平方和
    for (i = 0; i < n; i++)
    {
        sum += (long)a[i] * a[i]; // 累加每个元素的平方
    }

    return sum; // 返回平方和结果
}
