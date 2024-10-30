#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b); // 输入2个整数（用空格隔开）

    if (a > b)
    { // 请进行单步调试，观察变量a、b、t的变化
        t = a;
        a = b;
        b = t;
    }
    printf("%d %d\n", a, b);
}