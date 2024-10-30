#include "allinclude.h"
int main(char s[], int n)
{ // Add your code here
    for (int i = 0; i < n; i++)
    {
        if ((int)s[i] <= (int)'a' + 25 && (int)s[i] >= (int)'a') // 限定修改范围为小写字母
        {
            s[i] = s[i] - 32;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", s[i]);
    }
}
