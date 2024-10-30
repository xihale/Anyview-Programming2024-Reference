#include "allinclude.h" // DO NOT edit this line

// 辅助函数，计算最大公约数
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 计算最小公倍数的主函数
int lcm(int m, int n)
{

    // 使用公式 lcm = (m * n) / gcd(m, n)
    return (m / gcd(m, n)) * n;
}
