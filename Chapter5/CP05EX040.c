#include "allinclude.h"
int main(int m, int n, int s)
{ // Add your code here
    s = 0;
    for (int i = 1; s < m; i++)
    {
        s += i;
        n = i;
    }
    printf("m=%d,n=%d,s=%d", m, n, s);
}

// int main(int m, int n, int s)
// { // Add your code here
//     s = 0;
//     int i = 1;
//     while (true)
//     {
//         if ((1 + i) * i / 2 > m) // 等差数列求和公式：(首项+末项)*项数/2
//         {
//             n = i;
//             s = ((1 + i) * i / 2);
//             break;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     printf("m=%d,n=%d,s=%d", m, n, s);
// }
