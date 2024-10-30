#include "allinclude.h" //DO NOT edit this line
int main(int a)
{ // add your code here
    int lower = 0;  // 定义个位数变量
    int middle = 0; // 定义十位数变量
    int higher = 0; // 定义百位数变量
    higher = a / 100;
    middle = a / 10 - higher * 10;
    lower = a - 100 * higher - 10 * middle;
    a = higher + middle * 100 + lower * 10;
    printf("移位后：a = %d\n", a);
}