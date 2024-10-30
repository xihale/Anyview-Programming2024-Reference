#include "allinclude.h"
int main(int a[][10], int n, float avg)
{ // Add your code here
    int sum = 0;
    for (int line = 0; line < n; line++)
    {
        for (int col = 0; col < n; col++)
        {
            sum += a[line][col];
        }
    }
    avg = (float)sum / (n * n);
    printf("avg=%f\n", avg);
}