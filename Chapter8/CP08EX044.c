#include "allinclude.h" // DO NOT edit this line

long func(char *s)
{
    long result = 0;
    int sign = 1;
    int started = 0; // 标记是否开始遇到数字字符

    // 检查第一个字符是否为负号，并确定符号
    while (*s != '\0')
    {
        if (*s == '-' && !started)
        {
            sign = -1;
            started = 1; // 标记开始处理数字
        }
        else if (*s >= '0' && *s <= '9')
        {
            result = result * 10 + (*s - '0');
            started = 1; // 标记已经开始转换数字
        }
        s++; // 移动到下一个字符
    }

    return result * sign; // 返回最终结果
}
