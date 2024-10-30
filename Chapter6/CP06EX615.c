#include "allinclude.h"
int main(int m, int n, int a[][10], int b[][10])
{ // Add your code here
    for (int line = 0; line < m; line++)
    {
        for (int col = 0; col < n; col++)
        {
            b[col][line] = a[line][col];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}