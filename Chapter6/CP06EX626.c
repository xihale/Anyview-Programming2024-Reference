#include "allinclude.h"
int main(int n, int dmax, int a[][10])
{ // Add your code here
    int cross[n];
    for (int pos = 0; pos < n; pos++)
    {
        cross[pos] = a[pos][pos];
    }
    for (int pos = 0; pos < n; pos++)
    {
        if (pos == 0)
        {
            dmax = cross[pos];
            continue;
        }
        if (cross[pos] > dmax)
        {
            dmax = cross[pos];
        }
    }
    printf("dmax=%d\n", dmax);
}