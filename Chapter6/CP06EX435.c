#include "allinclude.h"

int main(int m, int n, int a[], int b[])
{
    // 第一步：给数组a的前n个元素赋予从2开始的偶数
    for (int i = 0; i < n; i++)
    {
        a[i] = 2 * (i + 1);  // 2, 4, 6, 8, ...
    }

    // 第二步：每m个数求一个平均值，存入数组b
    int b_index = 0;
    for (int i = 0; i < n; i = i + m)
    {
        // 计算这一组m个数的总和
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + a[i + j];
        }
        
        // 计算平均值并存入b
        b[b_index] = sum / m;
        b_index = b_index + 1;
    }

    return 0;
}