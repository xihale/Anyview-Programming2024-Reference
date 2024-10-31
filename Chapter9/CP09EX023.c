#include "allinclude.h" // DO NOT edit this line

char *oldest(struct student s[], int n)
{
    int oldest_index = 0; // 假设第一个人为年龄最大
    for (int i = 1; i < n; i++)
    {
        // 比较出生日期，若 s[i] 的日期小于 s[oldest_index]，则更新
        if (s[i].birth.year < s[oldest_index].birth.year ||
            (s[i].birth.year == s[oldest_index].birth.year && s[i].birth.month < s[oldest_index].birth.month) ||
            (s[i].birth.year == s[oldest_index].birth.year && s[i].birth.month == s[oldest_index].birth.month && s[i].birth.day < s[oldest_index].birth.day))
        {
            oldest_index = i;
        }
    }

    return s[oldest_index].name; // 返回年龄最大者的姓名
}
