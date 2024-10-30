#include "allinclude.h"

int main()
{
    float a, b, c, d;
    a = 3.14159;
    b = 7.24;
    c = b * b * a;
    d = 2 * a * b;
    printf("area=%.3f\n", c); // 按3位小数的格式显示结果
    printf("circ=%.4f\n", d); // 按4位小数的格式显示结果
}