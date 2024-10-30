#include "allinclude.h" // DO NOT edit this line

void func(char s[], char t[])
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i % 2 == 0 && s[i] % 2 == 0)
        {
            t[j++] = s[i];
        }
    }
    t[j] = '\x00'; // 添加字符串结束符
}
