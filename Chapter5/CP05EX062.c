#include "allinclude.h"
#include <stdio.h>
int main()
{ // Add your code here
    int sum = 0, temp = 0;
    while (true)
    {
        scanf("%d", &temp);
        if (temp == 0)
        {
            break;
        }
        sum += temp;
    }
    printf("sum = %d", sum);
}