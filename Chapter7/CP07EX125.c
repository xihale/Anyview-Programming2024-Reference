#include "allinclude.h" // DO NOT edit this line

float func(float r)
{
    // 乘以 100 并进行四舍五入，保留两位小数
    float rounded_value = roundf(r * 100.0f);

    // 缩小 100 倍，得到保留两位小数的值
    return rounded_value / 100.0f;
}
