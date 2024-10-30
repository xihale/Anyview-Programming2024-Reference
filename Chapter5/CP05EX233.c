#include "allinclude.h" //DO NOT edit this line
int main()
{
    int term, result;
    char ch;
    scanf("%d", &result); // 获取第一个数字，并塞进结果里面
    // getchar();            // 丢弃换行符，因为scanf读取输入后，输入流buffer里面存在一个\n，不处理会导致下面的scanf直接被跳过

    ch = getchar(); // 获取op符，getchar会处理\n所以不用加多一个getchar来跳过

    scanf("%d", &term); // 获取操作数
    while (term != 0)
    { // Add your code here.
        // getchar();   // Anyview不用抛弃\n
        if (ch == 42) // ord("*") = 42
        {
            if (term == 0)
                break;
            result *= term;
        }
        else if (ch == 47) // ord("/") = 47
        {
            if (term == 0)
                break;
            result /= term;
        }
        ch = getchar();     // 获取下一个op符
        if (ch == 59)   // ord(";") = 59
        {
            break;
        }
        scanf("%d", &term); // 获取下一个操作数
    }
    printf("result: %d\n", result);
}