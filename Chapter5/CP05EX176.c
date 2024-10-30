#include "allinclude.h"
int main(long s, int a, int m, int k)
{ // Add your code here
    int base = 0;
    s = 0;
    for (int i = 0; i < m + k - 1; i++)
    {
        base += pow(10, i);
        if (i >= m - 1)
        {
            s += base * a;
        }
    }
    printf("a = %d,m = %d,k = %d,s = %d", a, m, k, s);
}