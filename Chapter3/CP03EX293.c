#include "allinclude.h" //DO NOT edit this line
int main()
{
    char a, b, c;
    // add your code here
    a = 'O';    // 与Java一样，单引号的字面量表示字符类型，双引号的字面量表示字符串类型，如果这里换成双引号会报错
    b = 'K';
    c = '!';
    printf("%c:%d %c:%d %c:%d\n", a, a, b, b, c, c);    // %d 可以自动将ASCII字符转换为ASCII码
}