#include "allinclude.h"

int main(int n, int ss, int a[][10])
{
    ss = 0;

    // 加上第一行和最后一行
    for (int i = 1; i < n - 1; i++)
    {
        ss += a[0][i];
        ss += a[i][0];
        ss += a[n - 1][i];
        ss += a[i][n - 1];
    }

    ss += a[0][0] + a[0][n-1] + a[n-1][0] + a[n-1][n-1];
    printf("ss=%d\n", ss);
}
