#include "allinclude.h"

int main()
{
    int sum = 0;
    int num = 0;
    
    // 接收用户输入
    scanf("%d", &num);
    
    // 累加所有以3开头的三位数
    while(num){
        // 检查这个数是否在100到399之间
        if(num >= 100 && num < 400){
            sum += num;
        }
        // 继续接收下一个数
        if(scanf("%d", &num) != 1){
            break;
        }
    }
    
    printf("sum = %d", sum);
    
    return 0;
}