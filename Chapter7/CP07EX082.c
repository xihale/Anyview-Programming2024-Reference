#include "allinclude.h" // DO NOT edit this line

void turningDown(char a[N][N])
{
    for (int j = 0; j < N; j++)
    {
        // 暂存每一列的最后一个元素
        char last = a[N - 1][j];

        // 将每一列的元素向下移动
        for (int i = N - 1; i > 0; i--)
        {
            a[i][j] = a[i - 1][j];
        }

        // 将暂存的最后一个元素放到列的顶部
        a[0][j] = last;
    }
}
