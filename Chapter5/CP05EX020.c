#include "allinclude.h"
int main(int n, int s)
{ // Add your code here
    for (int i = 1; i < n + 1; i++)
    {
        s += i;
    }
    printf("s=%d\n", s);
}