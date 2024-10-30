#include "allinclude.h" //DO NOT edit this line
int main()
{
    int i;
    for (i = 100; i <= 200; i++)
    {
        if (i % 4 == 2 && i % 7 == 4 && i % 9 == 5)
        {
            printf("total: %d", i);
            // Add your code here
        }
    }
}