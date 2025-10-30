#include "allinclude.h"

int main()
{
    // 找一个三位数，满足：百位数字*100 + 十位数字*10 + 个位数字 + 十位数字*100 + 个位数字*11 = 532
    
    for(int x = 0; x < 6; x++)
    {
        for(int y = 0; y <= 9; y++)
        {
            for(int z = 0; z <= 9; z++)
            {
                int num1 = x * 100 + y * 10 + z;
                int num2 = y * 100 + z * 11;
                int result = num1 + num2;
                
                if(result == 532)
                {
                    printf("x=%d, y=%d, z=%d\n", x, y, z);
                    return 0;
                }
            }
        }
    }
    
    return 0;
}