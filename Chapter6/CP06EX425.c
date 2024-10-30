#include "allinclude.h"

int main(int n, int a[])
{ // Add your code here
    a[0] = 2;
    a[1] = 3;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            continue;
        }
        a[i] = (a[i - 1] - a[i - 2]) * 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}