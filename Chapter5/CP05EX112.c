#include "allinclude.h"

int main()
{
    int n = 0;
    int sum = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("sum = %d", sum);
}