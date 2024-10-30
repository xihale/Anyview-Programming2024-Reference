#include "allinclude.h"
int main(int a[], int n)
{                           // Add your code here
    int a0 = 0, index = -1; // 新建临时变量a0存放第一个位置的数字，index为最小元素的下标
    int min = -1;           // 新建临时变量min存放最小值的值
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            index = 0;
            min = a[0];
            a0 = a[0];
        }
        else if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    // 交换最小值和a0
    a[0] = min;
    a[index] = a0;
    printf("a[0]=%d", a[0]);
}