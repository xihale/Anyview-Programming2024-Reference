#include "allinclude.h"
int main(int n, int sum, int a[][10])
{ // Add your code here
    sum = 0;
    for (int line = 0; line < n; line++)
    {
        for (int col = 0; col < n; col++)
        {
            sum += a[line][col];
        }
    }
    printf("sum=%d\n", sum);
}