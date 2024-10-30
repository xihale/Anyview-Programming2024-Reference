#include "allinclude.h"
int main(int n, int max, int a[6][6])
{ // Add your code here
    for (int line = 0; line < n; line++)
    {
        for (int col = 0; col < n; col++)
        {
            if (line == 0 && col == 0)
            {
                max = a[line][col];
                continue;
            }
            if (a[line][col] > max)
            {
                max = a[line][col];
            }
        }
    }
    printf("max = %d", max);
}