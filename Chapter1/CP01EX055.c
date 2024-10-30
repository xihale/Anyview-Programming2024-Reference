#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b, c, max;
    scanf("%d,%d,%d", &a, &b, &c); /*请输入三个数*/

    // Add your code here
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("max(%d,%d,%d)=%d\n", a, b, c, max);

    return 0;
}