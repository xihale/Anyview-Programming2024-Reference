#include "allinclude.h"

int main()
{
    int a, b, c;
    int d, e, f;
    scanf("%d,%d,%d", &a, &b, &c);

    // add your code here
    d = a && b; // a b 逻辑与 &&
    e = a || b; // a b 逻辑或 ||
    f = a && c; // a c 逻辑与 &&
    fprintf(stdout, "\n你的结果：\n");
    printf("%d && %d = %d\n", a, b, d);
    printf("%d || %d = %d\n", a, c, e);
    printf("%d && %d = %d\n", a, c, f);
}