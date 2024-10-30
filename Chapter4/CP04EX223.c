#include "allinclude.h" //DO NOT edit this line
int main()
{
    // 三角形的三条边
    int a;
    int b;
    int c;
    scanf("%d,%d,%d", &a, &b, &c);

    int result; // 保存判断结果
    // Add your code here
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    printf("%d\n", result);
}