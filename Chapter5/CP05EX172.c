#include "allinclude.h"
int main(long s, int a, int n)
{ // Add your code here
    int base = 0;
    for (int i = 0; i < n; i++)
    {
        base += pow(10, i);
        s += base * a;
    }
    printf("a = %d,n = %d,s = %d", a, n, s);
}