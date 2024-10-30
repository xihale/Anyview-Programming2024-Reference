#include "allinclude.h"
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    // Add your code here
    ////1.填入合适的内容，使其依次输入5个整数，计算它们的和
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    ////2.输出
    printf("sum = %d", sum);
}