#include "allinclude.h"
int main(long s, int n)
{ // Add your code here
    int tmp = 0;
    s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        tmp = tmp * 10 + i;
        s += tmp;
    }
    printf("n = %d,s = %d", n, s);
}