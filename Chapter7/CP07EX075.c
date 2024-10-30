#include "allinclude.h" // DO NOT edit this line

void turningLeft(char a[N][N])
{
    for (int i = 0; i < N; i++)
    {
        // 暂存每一行的第一个元素
        char first = a[i][0];

        // 将每一行的元素向左移动
        for (int j = 0; j < N - 1; j++)
        {
            a[i][j] = a[i][j + 1];
        }

        // 将暂存的第一个元素放到行的末尾
        a[i][N - 1] = first;
    }
}
