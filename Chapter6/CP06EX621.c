#include "allinclude.h"
int main(int n, int i, int imin, int a[][10])
{ // Add your code here
    int line[n];
    for (int col = 0; col < n; col++)
    {
        line[col] = a[i][col];
    }
    for (int col = 0; col < n; col++)
    {
        if (col == 0)
        {
            imin = line[col];
            continue;
        }
        if (line[col] < imin)
        {
            imin = line[col];
        }
    }
    printf("imin=%d\n", imin);
}