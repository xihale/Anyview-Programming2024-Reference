#include "allinclude.h" // DO NOT edit this line

int func(long n, int d[])
{
    int count = 0; // 用于计数位数
    long temp = n; // 临时变量，用于计算位数

    // 计算 n 的位数
    do
    {
        temp /= 10;
        count++;
    } while (temp > 0);

    // 将各位数字从高位到低位依次存入数组 d 中
    for (int i = count - 1; i >= 0; i--)
    {
        d[i] = n % 10; // 提取最低位数字
        n /= 10;       // 去掉最低位数字
    }

    return count; // 返回位数
}
