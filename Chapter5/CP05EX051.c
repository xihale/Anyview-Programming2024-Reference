#include "allinclude.h"
int main(int n, float s)
{ // Add your code here
    s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 == 1)
        {
            s += 1.0 / float(i);
        }
        else
        {
            s -= 1.0 / float(i);
        }
    }
    printf("1-1/2+1/3-...1/%d=%f", n, s);
}