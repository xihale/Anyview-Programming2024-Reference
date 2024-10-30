#include "allinclude.h" // DO NOT edit this line

void func(char s[], int n)
{
    int len = 0; // 用于计算字符串的长度

    // 手动计算字符串的长度
    while (s[len] != '\0')
    {
        len++;
    }

    // 从字符串尾部开始计算连续的 '*' 的个数
    int count = 0;
    int index = len - 1;
    while (index >= 0 && s[index] == '*')
    {
        count++;
        index--;
    }

    // 如果连续的 '*' 多于 n 个，则将多余的 '*' 删除
    if (count > n)
    {
        int new_len = len - (count - n);
        s[new_len] = '\0';
    }
}
