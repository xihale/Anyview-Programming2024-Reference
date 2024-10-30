#include "allinclude.h"
int main(int n, int i, int isum, int a[6][6])
{ // Add your code here
    isum = 0;
    for (int col = 0; col < n; col++)
    {
        isum += a[i][col];
    }
    printf("isum = %d", isum);
}