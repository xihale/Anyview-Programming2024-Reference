#include "allinclude.h" //DO NOT edit this line
int main()
{
    int x, y; // 鸡、猫的数量
    int heads = 30, feet = 90;

    for (int i = 0;; i++) // 定义此次枚举中鸡的数量有i只，则猫的数量有(30-i)只
    {                     // 哪有这么算方程的=-=
        x = i;
        y = 30 - i;
        if (i * 2 + (30 - i) * 4 == feet)
        {
            printf("chicken:%d, cat:%d\n", x, y); // 输出鸡和猫各有多少只
            break;
        }
    }
}