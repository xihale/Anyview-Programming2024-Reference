#include "allinclude.h"
int main(int n, int j, int jmax, int a[][10])
{ // Add your code here
    int col[n];
    for (int line = 0; line < n; line++)
    {
        col[line] = a[line][j];
    }
    for (int line = 0; line < n; line++)
    {
        if (line == 0)
        {
            jmax = col[line];
            continue;
        }
        if (col[line] > jmax)
        {
            jmax = col[line];
        }
    }
    printf("jmax=%d\n", jmax);
}