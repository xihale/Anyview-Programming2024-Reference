#include "allinclude.h" //DO NOT edit this line
int main()
{
    int x, y, z, I;
    int result = 532;
    int flag = 0; // 完成计算的标识
    x = 0;
    y = 0;
    z = 0;
    I = 0;
    // Add your code here
    for (int i = 1; i <= 5; i++) // 最后结果为532，说明x一定不会大于5，且三位数说明x一定不等于0
    {
        for (int j = 1; j < 10; j++) // 三位数，所以y一定不等于0
        {
            for (int k = 0; k < 10; k++)
            {
                I = i * 100 + j * 10 + k + j * 100 + k * 10 + k;
                if (I == result)
                {
                    x = i;
                    y = j;
                    z = k;
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    printf("x=%d,y=%d,z=%d\n", x, y, z);
}