#include "allinclude.h"

void func(int m, int d[], int *n)
{
    int count = 0; // 用于记录除数的个数

    // 找出所有能整除 m 的整数，按从小到大的顺序存入数组 d
    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0)
        {                 // 检查 i 是否是 m 的除数
            d[count] = i; // 将 i 存入数组 d
            count++;      // 增加计数
        }
    }

    *n = count; // 将除数的个数存入 n
}
