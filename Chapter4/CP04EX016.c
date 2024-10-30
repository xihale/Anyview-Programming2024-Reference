#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    if (a < b)
    { // Add your code here
        t = b;
        b = a;
        a = t;
    }

    printf("%d  %d\n", a, b);
}