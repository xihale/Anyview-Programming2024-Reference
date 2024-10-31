#include "allinclude.h" // DO NOT edit this line

char *match(char *s, char c) // 返回字符c在串s中首次出现的位置指针
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s; // 返回首次出现的位置指针
        }
        s++; // 移动到下一个字符
    }

    return NULL; // 未找到，返回 NULL
}
