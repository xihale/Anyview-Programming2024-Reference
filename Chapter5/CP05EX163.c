#include "allinclude.h"
int main(int n, float e)
{ // Add your code here
    e = 1.0;
    int numerator = 1;
    for (int i = 1; i < n + 1; i++)
    {
        numerator *= i;
        e += 1.0 / (float)numerator;
    }
    printf("n=%d,e=%.2f", n, e);
}