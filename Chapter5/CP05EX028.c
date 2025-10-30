#include "allinclude.h"

int main(int n, int s)
{
    s = 0;
    
    // 从2开始，每次加2，这样只加偶数
    for (int i = 2; i <= n; i = i + 2)
    {
        s = s + i;
    }
    
    printf("s=%d", s);
}