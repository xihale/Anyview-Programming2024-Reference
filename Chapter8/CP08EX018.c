#include "allinclude.h" // DO NOT edit this line
#include <string.h>     // 包含标准库以使用字符串处理函数

void sub_str(char *s, int m, char *t)
{
    int length = strlen(s);

    // 检查 m 是否有效
    if (m >= length)
    {
        t[0] = '\0'; // 如果 m 超过字符串长度，返回空字符串
        return;
    }

    // 复制从第 m 个字符开始的所有字符到 t 中
    int t_len = 0;
    for (int i = m; i < length; i++)
    {
        t[t_len++] = s[i];
    }
    t[t_len] = '\0'; // 添加字符串结束符

    // 对 t 中的字符进行升序排序
    for (int i = 0; i < t_len - 1; i++)
    {
        for (int j = i + 1; j < t_len; j++)
        {
            if (t[i] > t[j])
            {
                char temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
