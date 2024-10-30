#include "allinclude.h"
int main(long s, int m, int n)
{ // Add your code here
    int tmp = 0;
    s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        tmp = i + tmp * 10;
        if (i >= m)
        {
            s += tmp;
        }
    }
    printf("m = %d,n = %d,s = %d", m, n, s);
}