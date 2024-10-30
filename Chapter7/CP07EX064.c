#include "allinclude.h" //DO NOT edit this line

// 将 NxN 的二维数组水平翻转
void invertH(char a[N][N])
{
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // 交换第 i 行和第 (N - i - 1) 行的元素
            char temp = a[i][j];
            a[i][j] = a[N - i - 1][j];
            a[N - i - 1][j] = temp;
        }
    }
}
