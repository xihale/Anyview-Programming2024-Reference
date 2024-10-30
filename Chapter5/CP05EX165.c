#include "allinclude.h"
int main(int n, float x, float e)
{ // Add your code here
    int numerator = 1;
    e = 0.0;
    for (int i = 1; i < n + 1; i++)
    {
        if (i == 1)
        {
            e += (1 + x); // 1+x/1!
            continue;
        }
        numerator *= i;
        e += (float)pow(x, i) / numerator;
    }
    if (n == 0) // 0^0无意义，但是题目里面当n=0的时候结果为1，所以特别处理
    {
        e = 1.0;
    }
    printf("n=%d,x=%f,e=%f", n, x, e);
}