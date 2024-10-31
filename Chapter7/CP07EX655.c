#include "allinclude.h" // DO NOT edit this line

void func(char *s, int *num)
{
    int i;

    // 初始化元音统计数组 num，确保每个元音计数从 0 开始
    for (i = 0; i < 5; i++)
    {
        num[i] = 0;
    }

    // 遍历字符串 s，统计各元音字母的出现次数
    while (*s != '\0')
    {
        // 将字符转换为大写，以便统一比较
        char ch = (*s >= 'a' && *s <= 'z') ? *s - 'a' + 'A' : *s;

        switch (ch)
        {
        case 'A':
            num[0]++;
            break;
        case 'E':
            num[1]++;
            break;
        case 'I':
            num[2]++;
            break;
        case 'O':
            num[3]++;
            break;
        case 'U':
            num[4]++;
            break;
        default:
            break;
        }
        s++; // 移动到下一个字符
    }
}
