#include "allinclude.h"

int main(int n, int s)
{
    s = 0;
    
    // 从1开始，一直加到n
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    
    printf("s=%d\n", s);
}