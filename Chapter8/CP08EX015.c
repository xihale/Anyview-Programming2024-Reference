#include "allinclude.h" // DO NOT edit this line
#include <string.h>     // 包含标准库以使用字符串处理函数

void func(char *s1, char *s2, int n)
{
    // 直接处理特殊情况，当字符串长度小于等于 2 时，不需要排序
    if (n <= 2)
    {
        strncpy(s2, s1, n); // 直接复制 s1 到 s2
        s2[n] = '\0';       // 添加字符串结束符
        return;
    }

    // 复制首字符
    s2[0] = s1[0];

    // 复制中间部分到临时数组
    char middle[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        middle[i - 1] = s1[i];
    }

    // 对中间部分进行降序排序
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            if (middle[i] < middle[j])
            {
                char temp = middle[i];
                middle[i] = middle[j];
                middle[j] = temp;
            }
        }
    }

    // 将排序后的中间部分复制到 s2
    for (int i = 0; i < n - 2; i++)
    {
        s2[i + 1] = middle[i];
    }

    // 复制尾字符
    s2[n - 1] = s1[n - 1];
    s2[n] = '\0'; // 添加字符串结束符
}
