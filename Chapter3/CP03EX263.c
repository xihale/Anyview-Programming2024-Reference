#include "allinclude.h"
int main()
{
    int a, b;
    int c, d;
    scanf("%d,%d", &a, &b);

    // add your code here
    c = !a; // 逻辑非用!
    d = !b;
    fprintf(stdout, "\n你的结果：\n");  // fprintf(输出对象, 内容, 格式化内容)
    printf("!%d=%d\n", a, c);
    printf("!%d=%d\n", b, d);
}