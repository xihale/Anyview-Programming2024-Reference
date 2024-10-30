#include "allinclude.h"
int main(int n, int davg, int a[6][6])
{ // Add your code here
    int sum = 0;
    for (int pos = 0; pos < n; pos++)
    {
        sum += a[pos][pos];
    }
    davg = sum / n;
    printf("davg = %d", davg);
}
