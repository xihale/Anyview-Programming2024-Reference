#include "allinclude.h"

int main(int n, int smin, int a[][10])
{
    // 初始化 smin 为一个很大的值，确保后续比较时可以更新
    smin = a[0][0];

    // 遍历第一行和最后一行
    for (int i = 0; i < n; i++)
    {
        if (a[0][i] < smin)
            smin = a[0][i]; // 第一行
        if (a[n - 1][i] < smin)
            smin = a[n - 1][i]; // 最后一行
    }

    // 遍历第一列和最后一列
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i][0] < smin)
            smin = a[i][0]; // 第一列
        if (a[i][n - 1] < smin)
            smin = a[i][n - 1]; // 最后一列
    }

    printf("smin=%d\n", smin);
}
