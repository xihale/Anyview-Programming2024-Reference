#include "allinclude.h" // DO NOT edit this line

int func(int n, int a[])
{
    int count = 0;

    // 遍历 1 到 n 的所有数
    for (int i = 1; i <= n; i++)
    {
        // 判断是否能被 7 或 11 整除
        if (i % 7 == 0 || i % 11 == 0)
        {
            a[count] = i; // 将符合条件的数存入数组 a
            count++;      // 增加计数器
        }
    }

    return count; // 返回符合条件的数的个数
}
