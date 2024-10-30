#include "allinclude.h" // DO NOT edit this line

int func(int n)
{
    int sum = 0;
    for (int i = 2; i <= n / 2; i++)
    { // 从2开始循环到n的一半
        if (n % i == 0)
        {             // 如果i是n的因子
            sum += i; // 累加因子i
        }
    }
    return sum;
}
