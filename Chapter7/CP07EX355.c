#include "allinclude.h" // DO NOT edit this line

void func(char s[])
{
    int i = 0;         // 遍历字符串的索引
    int j = 0;         // 用于记录非前导 '*' 字符的位置
    int starCount = 0; // 记录前导 '*' 的数量

    // 统计前导 '*' 的数量
    while (s[i] == '*')
    {
        starCount++;
        i++;
    }

    // 将非前导 '*' 的字符移到数组前面
    while (s[i] != '\0')
    {
        s[j] = s[i];
        j++;
        i++;
    }

    // 在字符串尾部填充统计到的前导 '*' 字符
    for (i = 0; i < starCount; i++)
    {
        s[j + i] = '*';
    }

    // 设置字符串的结束符
    s[j + starCount] = '\0';
}
