#include "allinclude.h" //DO NOT edit this line
int main()
{
    int a, a1; // a1用于存放a的绝对值
    scanf("%d", &a);
    // Add you code here
    if (a < 0)
    {
        a1 = -a;
    }
    else
    {
        a1 = a;
    }

    printf("|%d| = %d\n", a, a1);
}

// #include "allinclude.h" //DO NOT edit this line
// int main()
// {
//     int a, a1; // a1用于存放a的绝对值
//     scanf("%d", &a);
//     // Add you code here
//     a1 = abs(a);
//     printf("|%d| = %d\n", a, a1);
// }

