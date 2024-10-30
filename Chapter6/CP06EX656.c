#include "allinclude.h"
int main(int a[][10], int n, float d2avg)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // 正对角线元素：a[i][i]
        sum += a[i][i];
        count += 1;

        // 反对角线元素：a[i][n - 1 - i]
        // 如果不是同一个元素（即 n 为奇数时中间的元素），则加上反对角线的值
        if (i != n - 1 - i)
        {
            sum += a[i][n - 1 - i];
            count += 1;
        }
    }
    d2avg = (float)sum / count;
    printf("d2avg=%f\n", d2avg);
}
