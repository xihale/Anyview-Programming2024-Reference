#include "allinclude.h"
int main(int n, int dsum, int a[6][6])
{ // Add your code here
    dsum = 0;
    for (int pos = 0; pos < n; pos++)
    {
        dsum += a[pos][pos];
    }
    printf("dsum = %d", dsum);
}
