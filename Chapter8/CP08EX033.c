#include "allinclude.h" // DO NOT edit this line

int month_day(int year, int yearday, int *pmonth, int *pday)
{
    // 判断是否为闰年
    int is_leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // 每月天数数组
    int days_in_month[] = {31, 28 + is_leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = is_leap ? 366 : 365;

    // 检查天数是否合理
    if (yearday < 1 || yearday > total_days)
    {
        return 0; // 不合理的天数
    }

    int month = 0;
    while (yearday > days_in_month[month])
    {
        yearday -= days_in_month[month];
        month++;
    }

    *pmonth = month + 1; // 月份从1开始
    *pday = yearday;     // 剩余的天数即为当月的日期
    return 1;            // 计算成功
}
