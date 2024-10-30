#include "allinclude.h"
int main()
{
    char a;
    a = 'x';
    printf("%1c%5c\n", a, a);
    printf("%2c%3c\n", a, a);
    printf("%3c%1c\n", a, a);
    printf("%3c%1c\n", a, a);
    printf("%2c%3c\n", a, a);
    printf("%1c%5c\n", a, a);
}