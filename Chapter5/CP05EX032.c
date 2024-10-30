#include "allinclude.h"

int main(int n, long f)
{ // Add your code here
    f = 1;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % 2 == 1 && i % 2 == 1)
        {
            f *= i;
        }
        else if (n % 2 == 0 && i % 2 == 0)
        {
            f *= i;
        }
    }
    printf("%d!!=%d", n, f);
}