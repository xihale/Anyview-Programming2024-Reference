#include "allinclude.h" //DO NOT edit this line

int main()
{
    // Add your code here
    int a = 100;
    int b = --a - 10; // b=99(100-1)-10=89, a=99
    printf("b=%d ", b);

    // Add your code here
    int c = 10 + a--; // c=10+99=109, a=99-1=98
    printf("c=%d ", c);
    printf("a=%d\n", a);
}