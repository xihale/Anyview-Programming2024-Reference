#include "allinclude.h"
int main(int a, int b, int c)
{                     // add your code here
    int a_lower = 0;  // 定义个位数变量
    int a_middle = 0; // 定义十位数变量
    int a_higher = 0; // 定义百位数变量
    int a_kilo = 0;   // 定义千位数变量
    a_kilo = a / 1000;
    a_higher = a / 100 - a_kilo * 10;
    a_middle = a / 10 - a_higher * 10 - a_kilo * 100;
    a_lower = a - 100 * a_higher - 10 * a_middle - a_kilo * 1000;
    int b_lower = 0;  // 定义个位数变量
    int b_middle = 0; // 定义十位数变量
    int b_higher = 0; // 定义百位数变量
    int b_kilo = 0;   // 定义千位数变量
    b_kilo = b / 1000;
    b_higher = b / 100 - b_kilo * 10;
    b_middle = b / 10 - b_higher * 10 - b_kilo * 100;
    b_lower = b - 100 * b_higher - 10 * b_middle - b_kilo * 1000;
    c = a_higher * 100000 + a_middle * 10000 + a_lower * 1000 + b_higher * 100 + b_middle * 10 + b_lower;
    printf("a=%d,b=%d,c=%d\n", a, b, c);
}