#include "allinclude.h" //DO NOT edit this line
int main()
{
    // 三角形的三条边
    int a;
    int b;
    int c;
    scanf("%d,%d,%d", &a, &b, &c);

    int result; // 保存结果
    // Add your code here
    if (a == b && b == c && a == c)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    printf("%d\n", result);
}