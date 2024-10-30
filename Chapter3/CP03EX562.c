#include "allinclude.h"
int main(int a, int b, int c)
{ // add your code here
    int a_lower = 0;  // 定义个位数变量
    int a_middle = 0; // 定义十位数变量
    int a_higher = 0; // 定义百位数变量
    a_higher = a / 100;
    a_middle = a / 10 - a_higher * 10;
    a_lower = a - 100 * a_higher - 10 * a_middle;
    int b_lower = 0;  // 定义个位数变量
    int b_middle = 0; // 定义十位数变量
    int b_higher = 0; // 定义百位数变量
    b_higher = b / 100;
    b_middle = b / 10 - b_higher * 10;
    b_lower = b - 100 * b_higher - 10 * b_middle;
    c = a_middle * 1000 + a_lower * 100 + b_middle * 10 + b_lower;
    printf("a=%d,b=%d,c=%d\n", a, b, c);
}