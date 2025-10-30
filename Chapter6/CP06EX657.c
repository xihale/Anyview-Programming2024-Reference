#include "allinclude.h"
int main(int a[][10], int n, float d2avg)
{ //Add your code here

    const int m = n >> 1;
    int sum = n&1 ? a[m][m] : 0;
    for(int i=0; i < m; ++i){
        sum = sum
            + a[i][i]
            + a[n-i-1][i]
            + a[i][n-i-1]
            + a[n-i-1][n-i-1];
    }

    const float avg = float(sum) / ((4*m) + (n&1));

    printf("d2avg=%f\n", avg);
}
