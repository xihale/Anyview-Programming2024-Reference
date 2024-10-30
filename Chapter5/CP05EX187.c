#include "allinclude.h" //DO NOT edit this line
/*如果没有编写输入语句就运行本程序，有可能会提示“非法访问内存”。*/

long s; // 用于保存最终的求和结果

int main()
{ // Add your code here.
    // 自行编写输入语句，输入的两个数字之间用空格隔开。
    int m = 0, n = 0;
    int tmp = 0;
    s = 0;
    scanf("%d %d", &m, &n);
    for (int i = 1; i < n + 1; i++)
    {
        tmp += i * pow(10, i - 1);
        if (i >= m)
        {
            s += tmp;
        }
    }
    printf("%ld", s);
}