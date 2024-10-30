#include "allinclude.h"
int main(char s[], int n, int c[])
{ // n为s数组的长度
    for (int i = 0; i < n; i++)
    {
        if ((int)s[i] <= 122 && (int)s[i] >= 97)    // 把参与统计的字符限制在a-z
        {
            c[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    { // 请勿改动此处代码，否则可能导致校验出错
        printf("c[%d]=%d ", i, c[i]);
    }
}