#include "allinclude.h"

int main(int n, char s[], int num)
{
    int i = 0;

    // 提取每一位数字，逆序存储到字符数组 s 中
    while (n > 0)
    {
        s[i] = (n % 10) + '0'; // 将数字转换为字符并存储
        n /= 10;               // 去掉最后一位数字
        i++;
    }

    // 逆序存储字符串
    s[i] = '\0x00'; // 添加字符串结束标志

    for (int i = 0; i < num; i++)
    {
        printf("%c", s[i]);
    }
}
