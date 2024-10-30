#include "allinclude.h" //DO NOT edit this line

// 将 nxn 的二维数组按次对角线翻转
void invert(char a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            // 交换元素 a[i][j] 和 a[N-j-1][N-i-1]
            char temp = a[i][j];
            a[i][j] = a[N - j - 1][N - i - 1];
            a[N - j - 1][N - i - 1] = temp;
        }
    }
}
