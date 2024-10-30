#include "allinclude.h" //DO NOT edit this line
int main(int a, int b)
{ // add your code here
    b = a - a / 100 * 100;
    printf("a=%d,b=%d\n", a, b);
}

/* 做法2

#include "allinclude.h" //DO NOT edit this line
int main(int a, int b)
{ // add your code here
    int c = a / 100;
    b = a - c * 100;
    printf("a=%d,b=%d\n", a, b);
}

*/