#include "allinclude.h" // DO NOT edit this line

int findmax(int s[], int n)
{
    int *p = s;   // 指针 p 指向数组 s 的起始位置
    int max = *p; // 初始化 max 为第一个元素的值

    for (int i = 1; i < n; i++)
    {
        p++; // 将指针 p 移动到下一个元素
        if (*p > max)
        {
            max = *p; // 更新最大值
        }
    }

    return max; // 返回找到的最大值
}
