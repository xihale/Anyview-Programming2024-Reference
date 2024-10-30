#include "allinclude.h" // DO NOT edit this line

int func(int a, int b)
{
    // 检查 a 和 b 是否为两位数正整数
    if (a < 10 || a > 99 || b < 10 || b > 99)
    {
        return -1; // 若不是两位数，返回 -1
    }

    // 获取 a 的十位和个位数
    int a_tens = a / 10;  // a 的十位数
    int a_units = a % 10; // a 的个位数

    // 获取 b 的十位和个位数
    int b_tens = b / 10;  // b 的十位数
    int b_units = b % 10; // b 的个位数

    // 按照要求合并成四位数 c
    int c = a_tens * 1000 + b_tens * 100 + a_units * 10 + b_units;

    return c;
}
