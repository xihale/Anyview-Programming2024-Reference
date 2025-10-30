#include "allinclude.h"

int main(int n, float pi)
{
    pi = 0;
    
    // 使用莱布尼茨公式计算圆周率
    // π/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...
    // π = 4 * (1 - 1/3 + 1/5 - 1/7 + ...)
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)  // 奇数项为正
        {
            pi += 4.0 / (2 * i - 1);
        }
        else  // 偶数项为负
        {
            pi -= 4.0 / (2 * i - 1);
        }
    }
    
    printf("n=%d,pi=%.3f", n, pi);
}