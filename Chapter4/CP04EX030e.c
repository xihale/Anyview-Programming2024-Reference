#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a;
    scanf("%d", &a); /*输入a*/

    if (a >= 0)                        // 请单步调试，观察if语句的跳转执行路径
        printf("%d is positive\n", a); /*a为0或正数*/
    else
        printf("%d is negative\n", a); /*a为负数*/
}