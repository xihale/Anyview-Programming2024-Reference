#include "allinclude.h"
int main(int n, int e, int a[])
{                            // Add your code here
    int next = 0, index = 0; // index
    for (int i = 0; i < n; i++)
    {
        if (a[i] > e){
            for(int j = n; j > i; --j)
                a[j] = a[j-1];
            a[i] = e;
            break;
        }
    }

    // 末尾情况无需处理（下面只输出 0..n-1）

    ///////DO NOT edit this section: begin////////
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    ///////DO NOT edit this section: end/////////
}
