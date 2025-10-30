#include "allinclude.h"
#include<stdio.h>
int main()
{ // Add your code here
    int n = 0;     // 接受用户输入的数字n
    int sum = 0;   // 存放总和

    scanf("%d", &n); // 接受用户输入

    while(n){
        sum+=n%10;
        n/=10;
    }

    printf("sum = %d", sum);
}
