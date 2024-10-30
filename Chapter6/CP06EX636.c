#include "allinclude.h"
int main(int n, int d2min, int a[6][6])
{ // Add your code here
    int cross[n], anti_cross[n];
    for (int pos = 0; pos < n; pos++)
    {
        cross[pos] = a[pos][pos]; // 正对角线
    }
    for (int pos = 0; pos < n; pos++)
    {
        anti_cross[pos] = a[n - 1 - pos][pos]; // 反对角线
    }
    for (int pos = 0; pos < n; pos++)
    {
        if (pos == 0)
        {
            d2min = cross[pos];
            continue;
        }
        if (cross[pos] < d2min)
        {
            d2min = cross[pos];
        }
    }
    for (int pos = 0; pos < n; pos++)
    {
        if (anti_cross[pos] < d2min)
        {
            d2min = anti_cross[pos];
        }
    }
    printf("d2min = %d\n", d2min);
}