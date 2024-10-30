#include "allinclude.h"
int main(int n, int d2max, int a[6][6])
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
            d2max = cross[pos];
            continue;
        }
        if (cross[pos] > d2max)
        {
            d2max = cross[pos];
        }
    }
    for (int pos = 0; pos < n; pos++)
    {
        if (anti_cross[pos] > d2max)
        {
            d2max = anti_cross[pos];
        }
    }
    printf("d2max = %d\n", d2max);
}