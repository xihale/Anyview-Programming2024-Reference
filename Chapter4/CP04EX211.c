#include "allinclude.h" //DO NOT edit this line
int main()
{
    // 三角形的三条边
    int a;
    int b;
    int c;
    scanf("%d,%d,%d", &a, &b, &c);
    int result;

    result = a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a;
    // 满足两边之和大于第三边和两边之差小于第三边
    printf("%d\n", result);
}