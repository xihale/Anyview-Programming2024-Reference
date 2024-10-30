#include "allinclude.h"
int main(int n)
{ // Add your code here
    int s = 0;
    for (int i = 1; i < n + 1; i++)
    {
        s += i;
    }
    printf("1+2+...+n=%d\n", s);
}