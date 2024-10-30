#include "allinclude.h" //DO NOT edit this line

// 将 NxN 的二维数组垂直翻转
void invertV(char a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N / 2; j++)
        {
            // 交换第 i 行的第 j 列和第 (N - j - 1) 列的元素
            char temp = a[i][j];
            a[i][j] = a[i][N - j - 1];
            a[i][N - j - 1] = temp;
        }
    }
}
