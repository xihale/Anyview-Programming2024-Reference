#include "allinclude.h"

int main(int n, float savg, int a[][10])
{
    int ss = 0;

    // 加上第一行和最后一行
    for (int i = 0; i < n; i++)
    {
        ss += a[0][i];     // 第一行
        ss += a[n - 1][i]; // 最后一行
    }

    // 加上第一列和最后一列
    for (int i = 1; i < n - 1; i++)
    {
        ss += a[i][0];     // 第一列
        ss += a[i][n - 1]; // 最后一列
    }
    savg = (float)ss / (4 * (n - 1));
    printf("savg=%f\n", savg);
}
