#include "allinclude.h"

int main()
{
    int a1, a2;
    float b, c;
    b = 35.425, c = 52.954;
    a1 = (int)(b + c);
    a2 = (int)b + (int)c;
    printf("%d\n", a1);
    printf("%d\n", a2);
}