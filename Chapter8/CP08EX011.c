#include "allinclude.h" // DO NOT edit this line

void func(char s[], char t[], int n)
/* 数组s的前n个元素存放给定的字符序列，
   数组t的前n个元素存放s的逆序列。
   注意：数组的下标从0开始。
*/
{
    int i;

    // 将 s 的字符逆序复制到 t 中
    for (i = 0; i < n; i++)
    {
        t[i] = s[n - 1 - i];
    }

    // 添加字符串结束符
    t[n] = '\0';
}
