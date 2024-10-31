#include "allinclude.h" // DO NOT edit this line
#include <string.h>     // 包含标准库以使用字符串处理函数

void func(char *s1, char *s2)
{
    int length = strlen(s1);

    // 直接处理特殊情况：长度小于等于 2 的字符串不需要排序
    if (length <= 2)
    {
        strcpy(s2, s1); // 直接复制 s1 到 s2
        return;
    }

    // 复制首字符
    s2[0] = s1[0];

    // 复制中间部分到临时数组
    char middle[length - 2];
    for (int i = 1; i < length - 1; i++)
    {
        middle[i - 1] = s1[i];
    }

    // 对中间部分按 ASCII 码进行降序排序
    for (int i = 0; i < length - 3; i++)
    {
        for (int j = i + 1; j < length - 2; j++)
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
    for (int i = 0; i < length - 2; i++)
    {
        s2[i + 1] = middle[i];
    }

    // 复制尾字符
    s2[length - 1] = s1[length - 1];
    s2[length] = '\0'; // 添加字符串结束符
}
