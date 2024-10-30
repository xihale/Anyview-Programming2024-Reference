#include "allinclude.h" // DO NOT edit this line

void func(int n, int a[], int c[])
{
    int i; // 定义循环变量

    // 将数组 c 初始化为 0，因为它会存储每个年龄段的人数
    for (i = 0; i <= 10; i++)
    {
        c[i] = 0;
    }

    // 遍历数组 a，统计每个年龄段的人数
    for (i = 0; i < n; i++)
    {
        int age = a[i]; // 获取当前人的年龄

        // 根据年龄将人数存入对应的年龄段
        if (age >= 0 && age <= 100)
        {
            int index = age / 10; // 计算所属年龄段
            c[index]++;           // 对应年龄段的人数加 1
        }
        else if (age > 100)
        {
            c[10]++; // 年龄大于 100 的计入 c[10]
        }
    }
}
