#include "allinclude.h"
int main(int n, float f)
{                                    // Add your code here
    int base = 1;                    // 定义分母
    for (int i = 1; i < -n + 2; i++) // 因为n是负数，所以要正过来
    {
        base *= i;
    }
    f = 1.0 / (float)base;
    printf("(%d)!=%f", n, f);
}