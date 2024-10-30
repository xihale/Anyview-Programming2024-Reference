#include "allinclude.h" // DO NOT edit this line

void turningRight(char a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        // 暂存每一行的最后一个元素
        char last = a[i][N - 1];

        // 将每一行的元素向右移动
        for (int j = N - 1; j > 0; j--)
        {
            a[i][j] = a[i][j - 1];
        }

        // 将暂存的最后一个元素放到行的开头
        a[i][0] = last;
    }
}
