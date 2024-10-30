#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b) // 请单步调试，观察a和b的变化过程
        printf("%d %d\n", a, b);
    else
        printf("%d %d\n", b, a);
}