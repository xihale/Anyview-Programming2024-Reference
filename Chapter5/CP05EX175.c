#include "allinclude.h"
int main(long s, int a, int m, int n)
{ // Add your code here
    int base = 0;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        base += pow(10, i);
        if (i >= m - 1)
        {
            s += base * a;
        }
    }
    printf("a = %d,m = %d,n = %d,s = %ld", a, m, n, s);
}