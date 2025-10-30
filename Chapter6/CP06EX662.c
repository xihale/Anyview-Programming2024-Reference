#include "allinclude.h"

int main(int n, int ss, int a[][10])
{
    ss = 0;

    // 计算上边界（第一行）
    for (int i = 0; i < n; i++)
    {
        ss += a[0][i];
    }

    // 计算下边界（最后一行）
    for (int i = 0; i < n; i++)
    {
        ss += a[n - 1][i];
    }

    // 计算左边界（第一列，去掉四个角）
    for (int i = 1; i < n - 1; i++)
    {
        ss += a[i][0];
    }

    // 计算右边界（最后一列，去掉四个角）
    for (int i = 1; i < n - 1; i++)
    {
        ss += a[i][n - 1];
    }

    printf("ss=%d\n", ss);
}