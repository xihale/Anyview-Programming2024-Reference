#include "allinclude.h" //DO NOT edit this line
int main()
{
    int odd, even, i, n;
    // Add your code here
    scanf("%d", &n);
    odd = 0;
    even = 0;
    for (i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1) // i是奇数
        {
            odd += i;
        }
        else // i是偶数
        {
            even += i;
        }
    }
    printf("sum of odd = %d   ", odd);  /*奇数之和*/
    printf("sum of even = %d\n", even); /*偶数之和*/
}