#include "allinclude.h"
int main(int n, float pi)
{ // Add your code here
    pi = 0;
    for (int i = 1; i < n + 1; i++)
    {
        printf("%f, %f, %f", i, n, pi);
        if (i % 2 == 0)
        {
            pi -= 4.0 / float(i * 2 + 1);
        }
        else
        {
            pi += 4.0 / float(i * 2 + 1);
        }
    }
    printf("n=%d,pi=%.3f", n, pi);
}