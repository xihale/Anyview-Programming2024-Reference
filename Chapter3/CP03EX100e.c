#include "allinclude.h"
int main()
{
    int a, b, c, d, timsum;
    a = 8, b = 7, c = 5, d = 6; // 使用逗号分隔，4个赋值构成一个语句
    timsum = a * b + c * d;
    printf("%d*%d+%d*%d=%d\n", a, b, c, d, timsum);
}