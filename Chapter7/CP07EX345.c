#include "allinclude.h" // DO NOT edit this line

int func(char s[])
{
    int i = 0;      // 遍历字符串的索引
    int count = 0;  // 单词计数器
    int inWord = 0; // 标志是否在单词中，0 表示在空格中，1 表示在单词中

    while (s[i] != '\0')
    {
        // 如果当前字符不是空格且之前状态是空格，则进入新单词
        if (s[i] != ' ' && inWord == 0)
        {
            count++;    // 计数单词数
            inWord = 1; // 设置标志为在单词中
        }
        // 如果当前字符是空格，设置标志为不在单词中
        else if (s[i] == ' ')
        {
            inWord = 0;
        }
        i++; // 移动到下一个字符
    }

    return count; // 返回单词的总数
}
