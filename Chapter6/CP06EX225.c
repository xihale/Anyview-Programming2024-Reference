#include "allinclude.h"
int main(int n, int e, int a[])
{                            // Add your code here
    int next = 0, index = 0; // index用来存放需要修改的位置
    for (int i = 0; i < n; i++)
    {
        if ((a[i] < e && e < a[i + 1]) || a[i] < e && (i + 1) == n)
        // 情况1：前面的数字小于e且后面的数字大于e
        // 情况2：前面的数字小于e且是最后一个位置
        {
            index = i + 1;
            next = a[i + 1];
            break;
        }
    }
    for (int i = index; i < n + 1; i++)
    {
        if (i == index) // 对待修改位置进行修改
        {
            a[i] = e;
            continue;
        }
        a[i] = next;
        next = a[i + 1];
    }

    ///////DO NOT edit this section: begin////////
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    ///////DO NOT edit this section: end/////////
}