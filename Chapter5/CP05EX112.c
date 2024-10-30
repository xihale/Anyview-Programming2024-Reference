#include "allinclude.h"
#include<stdio.h>
int main()
{ // Add your code here
    // 首先从键盘输入一个整数n
    int n = 0;     // 接受用户输入的数字n
    int sum = 0;   // 存放总和
    float tmp = 0; // 临时变量
    int size = 0;  // 定义数字的位数

    scanf("%d", &n); // 接受用户输入

    for (int i = 0;; i++)
    {
        tmp = (float)n / (float)(10 ^ i);
        if (tmp < 1)
        {
            size = i + 1; // 得到数字的位数，例如12345是五位数，所以size会是5
            tmp = 0.0;    // 初始化tmp
            break;
        }
    }
    // int array[size] = {0}; // 初始化一个存放每个位置数字的数组
    for (int i = 0; i < size; i++) // 注释以i=2为例
    {
        tmp = (int)((float)n / (float)(10 ^ i));               // 截断后面的小数部分，此时pow(10, 2)=100, 12345/100=123.45, (int)123.45 = 123
        sum += tmp - (int)((n % 10 ^ (i + 1)) * 10 ^ (i + 1)); // 取得个位数为0的部分，即120，然后tmp-120=3，达到加数位上数字的目的
    }
    printf("sum = %d", sum);
}