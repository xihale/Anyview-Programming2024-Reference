#include "allinclude.h"
int main(int n, int i, int iavg, int a[6][6])
{ // Add your code here
    int sum = 0;
    for (int col = 0; col < n; col++)
    {
        sum += a[i][col];
    }
    iavg = sum / n;
    printf("iavg = %d", iavg);
}