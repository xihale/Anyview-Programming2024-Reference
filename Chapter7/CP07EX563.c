#include "allinclude.h" // DO NOT edit this line

int func(long n, int d[])
{
    int count = 0; // 用于计数位数

    // 当 n 大于 0 时，将各位数字依次存入数组 d 中
    do
    {
        d[count] = n % 10; // 提取最低位数字
        n /= 10;           // 去掉最低位数字
        count++;           // 增加位数计数
    } while (n > 0);

    return count; // 返回位数
}
