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
    if (a >= b && a >= c)
    {
        // a 是最长边
        if (pow(b, 2) + pow(c, 2) > pow(a, 2))
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else if (b >= a && b >= c)
    {
        // b 是最长边
        if (pow(a, 2) + pow(c, 2) > pow(b, 2))
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        // c 是最长边
        if (pow(a, 2) + pow(b, 2) > pow(c, 2))
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    printf("%d\n", result);
}
