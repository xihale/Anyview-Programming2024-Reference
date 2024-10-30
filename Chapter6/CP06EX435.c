#include "allinclude.h"
int main(int m, int n, int a[], int b[], int size_b)
{ // Add your code here
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = (i + 1) * 2; // 将数组a的每一项赋值为2开始的偶数
        if (i % m == 0)
        {
            b[index] = (i + 1) * 2; // 因为从第1项开始（索引为0），每m项取出，则索引能被m整除
            index++;
        }
    }
    for (int i = 0; i < size_b; i++)
    {
        printf("%d ", b[i]);
    }
}