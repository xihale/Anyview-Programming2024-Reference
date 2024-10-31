#include "allinclude.h" // DO NOT edit this line

void func(char *s, char *t)
/* s是给定字符串的起始地址，
   t是求得s的逆串的起始地址
*/
{
    int length = 0;
    int i;

    // 计算字符串 s 的长度
    while (s[length] != '\0')
    {
        length++;
    }

    // 将 s 的字符逆序复制到 t 中
    for (i = 0; i < length; i++)
    {
        t[i] = s[length - 1 - i];
    }

    // 添加字符串结束符
    t[length] = '\0';
}
