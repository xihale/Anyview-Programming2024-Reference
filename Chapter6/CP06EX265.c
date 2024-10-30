#include "allinclude.h"

void bubbleSortAscending(int arr[], int start, int end)
{
    for (int i = start; i < end - 1; i++)
    {
        for (int j = start; j < end - 1 - (i - start); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int start, int end)
{
    for (int i = start; i < end - 1; i++)
    {
        for (int j = start; j < end - 1 - (i - start); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int n, int length, int a[])
{
    int sum = 0;
    float average = 0; // 用于保存前n个元素的平均值
    // Add your code here
    // 前半部分从大到小排序
    bubbleSortDescending(a, 0, n / 2);

    // 后半部分从小到大排序
    bubbleSortAscending(a, (n % 2 == 0) ? n / 2 : n / 2 + 1, n);

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    average = (float)sum / (float)n;
    //----------请勿改动以下输出语句--------------------
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n平均值:%0.3f\n", average);
}