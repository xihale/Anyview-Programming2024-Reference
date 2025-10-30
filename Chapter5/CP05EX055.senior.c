#include "allinclude.h"
int main(int n, float pi)
{ // Add your code here
    pi = 0;
    for (int i = 1; i < n + 1; i++)
    {
        pi += (((i&1)<<1)-1) * 4.0 / ( 2 * i - 1);
    }
    printf("n=%d,pi=%.3f", n, pi);
}
