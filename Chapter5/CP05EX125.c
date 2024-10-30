//#include "allinclude.h"
#include<stdio.h>
int main()
{ // Add your code here
    int tmp = 0;
    int sum = 0;
    while (1)
    {
        scanf("%d", &tmp);
        printf("%s", tmp / 10);
        if (tmp == 0)
        {
            break;
        }
        if ((tmp / 10) % 3 == 0)
        {
            sum += tmp;
        }
    }
    printf("sum = %d", sum);
}