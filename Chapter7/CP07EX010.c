#include "allinclude.h"      //DO NOT edit this line
int min(int x, int y, int z) // 返回x、y、z中的最小值
{                            // Add your code here
    int m = 0;
    if (x < y)
    {
        m = x;
    }
    else
    {
        m = y;
    }
    if (z < m)
    {
        m = z;
    }
    return m;
}