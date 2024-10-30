#include "allinclude.h"
int main(int n, long s)
{ // Add your code here
    s = 0;
    long base = 1;
    for (long i = 1; i < n + 1; i++)
    {
        base *= i;
        s += base;
    }
    printf("n=%d,s=%d", n, s);
}