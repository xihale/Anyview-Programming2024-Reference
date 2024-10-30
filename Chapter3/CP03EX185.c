#include "allinclude.h" //DO NOT edit this line
int main()
{ // Add your code here
    int a = 1;
    int b = ++a + 10;    // b = 2 + 10 = 12
    printf("b=%d ", b);  // b=12
    int c = 10 - a++;    // c = 10 - 2, a = 2 + 1 = 3
    printf("c=%d ", c);  // c=8
    printf("a=%d\n", a); // a=3
}