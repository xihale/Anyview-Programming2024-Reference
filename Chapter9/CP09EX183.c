#include "allinclude.h" // DO NOT edit this line

struct courseNode *deleteCourse(struct courseNode **Lc, int c)
{
    struct courseNode *current = *Lc;
    struct courseNode *previous = NULL;

    // 遍历链表
    while (current != NULL)
    {
        // 查找课程号为 c 的课程
        if (current->cID == c)
        {
            // 若是头节点
            if (previous == NULL)
            {
                *Lc = current->next; // 更新头指针
            }
            else
            {
                previous->next = current->next; // 跳过当前节点
            }
            current->next = NULL; // 断开当前节点与链表的连接
            return current;       // 返回被删除的节点
        }
        previous = current;      // 更新 previous
        current = current->next; // 移动到下一个节点
    }

    return NULL; // 未找到课程号为 c 的课程，返回 NULL
}
