#include "allinclude.h"

int main(int n, float s)
{                                           // Add your code here
    int numerator1 = 1, numerator2 = 1;     // 分子数列第1、2项分别为1, 1，将题目中的2当做第三项，即[1, 1, 2, ...]
    int denominator1 = 0, denominator2 = 1; // 分母数列第1、2项分别为0, 1，将题目中的1当做第三项，即[0, 1, 1, ...]
    float sum = 0.0;                        // 定义求和变量
    // 题目的分子和分母分别是斐波那契数列
    // e.g. 分子：2, 3, 5, 9, ...
    // e.g. 分母：1, 2, 3, 5, ...
    for (int i = 3; i < n + 3; i++)
    {
        int new_numerator = numerator1 + numerator2;          // 计算第i项的分子
        int new_denominator = denominator1 + denominator2;    // 计算第i项的分母
        sum += (float)new_numerator / (float)new_denominator; // 求和
        numerator1 = numerator2;
        numerator2 = new_numerator; // 更新分子
        denominator1 = denominator2;
        denominator2 = new_denominator; // 更新分母
    }
    s = sum;
    printf("n=%d,s=%f", n, s);
}