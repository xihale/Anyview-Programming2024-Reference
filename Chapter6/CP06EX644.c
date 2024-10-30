#include "allinclude.h"
int main(int n, int j, int javg, int a[6][6])
{ // Add your code here
    int sum = 0;
    for (int line = 0; line < n; line++)
    {
        sum += a[line][j];
    }
    javg = sum / n;
    printf("javg = %d", javg);
}
