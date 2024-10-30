#include "allinclude.h"
int main(int n, float s)
{ // Add your code here
    int base = 0;
    s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        base += i;
        s += 1.0 / (float)base;
    }
    printf("1+1/(1+2)+...+1/(1+2+...+%d)=%f", n, s);
}