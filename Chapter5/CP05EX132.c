#include "allinclude.h"
int main()
{ // Add your code here
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
    }
    printf("sum = %d", sum);
}