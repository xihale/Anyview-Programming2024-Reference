#include "allinclude.h" //DO NOT edit this line
int main()
{ // 请单步调试本程序，观察变量c和d在程序执行过程中的变化
    int a = 52, b = 25;
    int c, d;
    c = ((a > b) ? a : b);
    d = ((a < b) ? a : b * b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
}