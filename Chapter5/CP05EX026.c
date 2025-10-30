#include "allinclude.h"

int main(int n, int s)
{
    s = 0;
    
    // 从1开始，每次加2，这样就是所有奇数
    for (int i = 1; i <= n; i += 2)
    {
        s += i;
    }
    
    printf("s=%d", s);
}