#include "allinclude.h" // DO NOT edit this line

int func(char a[])
{
    int i = 0; // 当前字符的索引
    int j = 0; // 下一个保留字符的位置

    // 遍历字符串数组 a，删除重复字符
    while (a[i] != '\0')
    {
        // 如果当前字符与下一个要保留的字符不同，则保留该字符
        if (a[i] != a[j - 1] || j == 0)
        {
            a[j] = a[i]; // 将字符存储到保留位置 j
            j++;         // 保留位置向后移动
        }
        i++; // 移动到下一个字符
    }

    a[j] = '\0'; // 在新字符串末尾添加结束符 '\0'

    return j; // 返回新字符串的长度
}
