#include "allinclude.h" // DO NOT edit this line

float creditSum(struct courseNode *Lc, int s)
{
    float totalCredits = 0.0; // 初始化总学分

    struct courseNode *current = Lc;
    while (current != NULL)
    {
        if (current->semester == s)
        {
            totalCredits += current->credit; // 累加当前学期的学分
        }
        current = current->next; // 移动到下一个节点
    }

    return totalCredits; // 返回总学分
}
