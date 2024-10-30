#include "allinclude.h"
int main(int n, int dmin, int a[][10])
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
            dmin = cross[pos];
            continue;
        }
        if (cross[pos] < dmin)
        {
            dmin = cross[pos];
        }
    }
    printf("dmin=%d\n", dmin);
}