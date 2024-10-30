#include "allinclude.h"
int main(int n, long f)
{ // Add your code here
    f = 1;
    for (int i = 1; i < n + 1; i++)
    {
        f *= i;
    }
    printf("%d!=%d", n, f);
}