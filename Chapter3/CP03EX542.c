#include "allinclude.h"

int main(int a, int b)
{ // add your code here
    b = a / 10 * 10;
    printf("b=%d,a=%d\n", b, a);
}

/* 做法2

int main(int a, int b)
{
    int c = 0; // 除十余数
    c = a % 10;
    b = a - c;  // 减去除十余数，个位就是0
    printf("b=%d,a=%d\n", b, a);
}

*/