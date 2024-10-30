#include "allinclude.h"
int main(int n, int j, int jsum, int a[6][6])
{ // Add your code here
    jsum = 0;
    for (int line = 0; line < n; line++)
    {
        jsum += a[line][j];
    }
    printf("jsum = %d", jsum);
}