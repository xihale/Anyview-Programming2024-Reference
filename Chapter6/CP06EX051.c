#include "allinclude.h"
int main(char s[], int c[])
{ // n为s数组的长度
    for (int i = 0;; i++)
    {
        if(s[i] == '\x00')
        {
            break;
        }
        if ((int)s[i] <= 122 && (int)s[i] >= 97)    // 小写字母a-z
        {
            c[s[i] - 'a']++;
        }
        if ((int)s[i] <= 90 && (int)s[i] >= 65)     // 大写字母A-Z
        {
            c[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    { // 请勿改动此处代码，否则可能导致校验出错
        printf("c[%d]=%d ", i, c[i]);
    }
}