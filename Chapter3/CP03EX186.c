#include "allinclude.h" //DO NOT edit this line

int main()
{
    // Add your code here
    int a = 10;
    printf("a=%d ", a);

    // Add your code here
    int b = ++a + 5;    // b = (10 + 1) + 5
    printf("b=%d ", b); // b=16

    // Add your code here
    int c = 7 + a++;    // c = 7 + 11, a = a(11) + 1
    printf("c=%d ", c); // c=18

    // Add your code here
    printf("a=%d\n", a); // a = 12
}