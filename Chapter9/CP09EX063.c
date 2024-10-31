#include "allinclude.h" // DO NOT edit this line

float creditSum(struct course c[], int n, int s)
{
    float totalCredits = 0.0; // 初始化总学分

    for (int i = 0; i < n; i++)
    {
        if (c[i].semester == s)
        {
            totalCredits += c[i].credit; // 累加当前学期的学分
        }
    }

    return totalCredits; // 返回总学分
}
