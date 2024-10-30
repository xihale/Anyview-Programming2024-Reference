#include "allinclude.h" //DO NOT edit this line
int main()
{ // CAUTION: If run this program directly, it might fall into a infinite loop.
    long int n;
    int d, num, m = 9, t;
    num = 0;
    scanf("%d %d", &n, &d);
    do
    {               // Add your code here
        t = n % 10; // 取得数字的最后一位
        if (t == d)
        {
            num++;
        }
        if (t < m)
        {
            m = t; // 如果有更小的数字，更新最小值
        }
        n /= 10; // 平移一位，整数除法自动舍弃小数
    } while (n);
    printf("num=%d, min=%d", num, m);
}