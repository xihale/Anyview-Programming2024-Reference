#include "allinclude.h" //DO NOT edit this line

// 将字符串中ASCII码最小的字符放置于字符串的第一个字符位置
void func(char *str)
{
    if (str == NULL || str[0] == '\0')
        return; // 空字符串处理

    int min_index = 0; // 用于记录ASCII码最小字符的索引
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] < str[min_index])
        {
            min_index = i; // 更新最小字符的索引
        }
    }

    // 将ASCII码最小的字符放到第一个位置
    char min_char = str[min_index];
    for (int i = min_index; i > 0; i--)
    {
        str[i] = str[i - 1]; // 将字符往后移
    }
    str[0] = min_char; // 将最小字符放到第一个位置
}
