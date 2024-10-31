#include "allinclude.h" // DO NOT edit this line

struct courseNode *creditChange(struct courseNode *Lc, int c, float t)
{
    struct courseNode *current = Lc;

    // 遍历链表
    while (current != NULL)
    {
        // 查找课程号为 c 的课程
        if (current->cID == c)
        {
            current->credit = t; // 修改学分
            return current;      // 返回指向该课程节点的指针
        }
        current = current->next; // 移动到下一个节点
    }

    return NULL; // 未找到课程号为 c 的课程，返回 NULL
}
