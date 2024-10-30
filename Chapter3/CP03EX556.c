#include "allinclude.h" //DO NOT edit this line
int main(int a, int b)
{                   // add your code here
    int lower = 0;  // 定义个位数变量
    int middle = 0; // 定义十位数变量
    int higher = 0; // 定义百位数变量
    higher = a / 100;
    middle = a / 10 - higher * 10;
    lower = a - 100 * higher - 10 * middle;
    b = higher * 100 + lower * 10 + middle;
    printf("a=%d,b=%d\n", a, b);
}