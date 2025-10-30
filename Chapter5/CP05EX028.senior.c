#include "allinclude.h"
int main(int n, int s)
{ // Add your code here
    s=0;
    for (int i = 1; i < n + 1; i++)
    {
        if ((i % 2) == 0)
        {
            s += i;
        }
    }
    printf("s=%d", s);
}
