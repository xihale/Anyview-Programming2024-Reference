#include "allinclude.h"
int main(int a[], int n, int max, int min, int avg)
{ // Add your code here
    int count = 0;
    int sum = 0;
    max = 0;
    min = 0;
    avg = 0;
    // printf("%d", sizeof(a));
    // printf("%d", sizeof(a[0]));
    for (int i = 0; i < n; i++)
    {
        if (i == 0) // 第一个数字一定是最大值也是最小值
        {
            min = a[i];
            max = a[i];
        }
        if (a[i] > max && i != 0)
        {
            max = a[i];
        }
        if (a[i] < min && i != 0)
        {
            min = a[i];
        }
        sum += a[i];
        //printf("a[%d] = %d\n", i, a[i]);
    }
    avg = sum / n;
    printf("max=%d,min=%d,avg=%d\n", max, min, avg);
}