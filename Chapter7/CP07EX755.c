#include "allinclude.h" // DO NOT edit this line

void func(char *str, char *key)
{
    int i = 0;
    int j = 0;       // 用于遍历密钥字符
    int key_sum = 0; // 用于存储密钥的每个字符的ASCII之平方和

    // 遍历密钥，获得其所有元素的ASCII和
    while (key[j] != '\x00')
    {
        key_sum += pow(key[j], 2);
        j++;
    }

    // 遍历消息原文字符串
    while (str[i] != '\x00')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {                                             // 只加密小写字母
            int newChar = ((str[i] + key_sum) % 128); // 加密公式
            str[i] = (char)newChar;                   // 将加密后的字符存入str
        }
        i++; // 前进到消息中的下一个字符
    }
}
