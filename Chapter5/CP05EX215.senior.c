#include "allinclude.h"

int calc(int x, int y, int z){
    return (x*100 + y*10 + z) + (y*100 + z*11);
}

int main()
{
    for(int x = 0; x <  6; ++x)
    for(int y = 0; y <= 9; ++y)
    for(int z = 0; z <= 9; ++z)
        if( calc(x, y, z) == 532 ){
            printf("x=%d,y=%d,z=%d\n",x,y,z);
            return 0;
        }
}
