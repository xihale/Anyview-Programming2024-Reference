#include "allinclude.h"

int main(int n, int smax, int a[][10])
{
    smax = a[0][0];

    // 遍历第一行和最后一行
    for (int i = 0; i < n; i++)
    {
        if (a[0][i] > smax)
            smax = a[0][i]; // 第一行
        if (a[n - 1][i] > smax)
            smax = a[n - 1][i]; // 最后一行
    }

    // 遍历第一列和最后一列
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i][0] > smax)
            smax = a[i][0]; // 第一列
        if (a[i][n - 1] > smax)
            smax = a[i][n - 1]; // 最后一列
    }

    printf("smax=%d\n", smax);
}
