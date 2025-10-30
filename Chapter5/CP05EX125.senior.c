#include "allinclude.h"
int main()
{  //Add your code here

    int t=0;
    int sum = 0;

    while(~scanf("%d", &t) && t){
        sum += (t/100 == 3)?t:0;
    }


   printf("sum = %d",sum);
}
