#include "allinclude.h"
int main(int n, float s)
{ // Add your code here
    s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        s += 1.0 / float(i);
    }
    printf("1+...+1/%d=%f", n, s);
}