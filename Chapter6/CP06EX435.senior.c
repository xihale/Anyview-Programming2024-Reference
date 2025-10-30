#include "allinclude.h"
int main(int m, int n, int a[], int b[],int size_b)
{
    for (int i = 0; i < size_b; i++) {
        b[i] = m * (2 * i + 1) + 1;
        printf("%d ", b[i]);
    }
}
