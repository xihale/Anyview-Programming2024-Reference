#include "allinclude.h" //DO NOT edit this line
int main(int a, int b)
{ // add your code here
    b = a - ((a / 10 - a / 100 * 10) * 10);
    // 思路：减掉十位数*10即可，以345为例
    // 第一步：a/10得到34
    // 第二步：得到百位数字，a/100得到3
    // 第三步：用34减去30得到十位数
    // 第四步：用a=345减去40得到十位数归零的结果
    printf("a=%d,b=%d\n", a, b);
}