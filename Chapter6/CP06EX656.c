#include "allinclude.h"

int main(int a[][10], int n, int d2sum)
{ 
    // 计算矩阵的对角线之和
    d2sum = 0;
    
    // 主对角线：从左上到右下
    for(int i = 0; i < n; i++)
    {
        d2sum = d2sum + a[i][i];
    }
    
    // 副对角线：从右上到左下
    for(int i = 0; i < n; i++)
    {
        d2sum = d2sum + a[i][n-1-i];
    }
    
    // 如果矩阵是奇数维，中心元素被加了两次，要减去一次
    if(n % 2 == 1)
    {
        int mid = n / 2;
        d2sum = d2sum - a[mid][mid];
    }
    
    printf("d2sum=%d\n", d2sum);
}