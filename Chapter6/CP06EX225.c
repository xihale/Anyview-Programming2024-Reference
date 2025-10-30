#include "allinclude.h"

int main(int n, int e, int a[])
{
    // 从后向前遍历数组，找到第一个小于等于要插入元素的位置
    int i;
    for (i = 0; i < n; i++)
    {
        // 如果找到的元素大于要插入的元素
        if (a[i] > e)
        {
            // 从后向前移动元素，为新元素腾出位置
            for (int j = n; j > i; j--)
            {
                a[j] = a[j-1];
            }
            // 在正确位置插入元素
            a[i] = e;
            break;
        }
    }

    // 输出结果
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}