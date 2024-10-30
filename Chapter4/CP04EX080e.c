#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    switch (a)
    { // 请在此处设置断点，单步调试本程序，观察将运行哪些语句
    case 1:
        printf("%d+%d=%d\n", b, c, b + c);
        break;
    case 2:
        printf("%d-%d=%d\n", b, c, b - c);
        break;
    case 3:
        printf("%d*%d=%d\n", b, c, b * c);
        break;
    default:
        printf("(%d+%d)*(%d-%d)=%d\n", b, c, b, c, (b + c) * (b - c));
    }
}