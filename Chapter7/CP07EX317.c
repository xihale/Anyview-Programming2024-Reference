#include "allinclude.h" // DO NOT edit this line

int func(int n, int c, int d, int a[])
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % c == 0 && i % d == 0)
        {
            a[count] = i;
            count++;
        }
    }

    return count;
}
