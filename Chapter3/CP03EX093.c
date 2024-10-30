#include "allinclude.h" //DO NOT edit this line

int main()
{ // Add your code here
    int a = 511;
    int b = 246;
    int c = 257;
    int d = 495;
    int e = (a + b) / ((b - c) * (a - d));
    printf("(%d+%d)/((%d-%d)*(%d-%d))=%d\n", a, b, b, c, a, d, e);
}