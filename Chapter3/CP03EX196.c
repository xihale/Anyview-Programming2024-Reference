#include "allinclude.h" //DO NOT edit this line

int main()
{ // Add your code here
    int a = 10;
    printf("a=%d ", a);
    int b = --a + 5;     // b=9(10-1)+5=14, a=9
    printf("b=%d ", b);  // output: 14
    int c = 7 + a--;     // c=7+9, a=9-1=8
    printf("c=%d ", c);  // output: 16
    printf("a=%d\n", a); // output: 8
}