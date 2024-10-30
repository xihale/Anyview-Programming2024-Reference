#include "allinclude.h" // DO NOT edit this line

void turningUp(char a[N][N])
{
    for (int j = 0; j < N; j++)
    {
        // 暂存每一列的第一个元素
        char first = a[0][j];

        // 将每一列的元素向上移动
        for (int i = 0; i < N - 1; i++)
        {
            a[i][j] = a[i + 1][j];
        }

        // 将暂存的第一个元素放到列的底部
        a[N - 1][j] = first;
    }
}
