#include "allinclude.h"
int main(int n, int j, int jmin, int a[][10])
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
            jmin = col[line];
            continue;
        }
        if (col[line] < jmin)
        {
            jmin = col[line];
        }
    }
    printf("jmin=%d\n", jmin);
}