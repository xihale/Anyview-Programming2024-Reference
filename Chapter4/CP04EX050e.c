#include "allinclude.h" //DO NOT edit this line
int main()
{ // 请多次运行本程序，输入不同的整数，尝试获得所有情形的输出
    int a;
    scanf("%d", &a);
    if (a >= 100)
    {
        if (a >= 1000)
            printf("%d∈[1000,+∞)\n", a);
        else
            printf("%d∈[100,999]\n", a);
    }
    else
    {
        if (a < 10)
            printf("%d∈(-∞,10]\n", a);
        else
            printf("%d∈[10,99]\n", a);
    }
}