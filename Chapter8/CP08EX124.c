#include "allinclude.h" // DO NOT edit this line

int min3adj(int s[], int n) // 返回数组s中相邻三个数的和中的最小值。
{
    // 如果数组长度不足 3，无法计算相邻三个数的和，返回一个错误标志
    if (n < 3)
    {
        return -1; // 或者可以选择返回其他错误值
    }

    int min_sum = s[0] + s[1] + s[2]; // 初始化最小值为前三个元素的和

    for (int i = 1; i <= n - 3; i++)
    {
        int current_sum = s[i] + s[i + 1] + s[i + 2];
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
        }
    }

    return min_sum; // 返回最小的相邻三个数的和
}
