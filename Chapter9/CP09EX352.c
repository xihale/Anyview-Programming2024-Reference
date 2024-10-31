#include "allinclude.h" // DO NOT edit this line

struct node *sorting(struct node *L)
{
    if (L == NULL || L->next == NULL)
    {
        return L; // 若链表为空或只有一个节点，则不需要排序
    }

    struct node *sorted = NULL; // 新的排序后链表的头节点
    struct node *current = L;   // 用于遍历原始链表的当前节点

    while (current != NULL)
    {
        struct node *nextNode = current->next; // 保存下一个节点
        struct node *prev = NULL;
        struct node *pos = sorted;

        // 找到插入位置
        while (pos != NULL && pos->ch < current->ch)
        {
            prev = pos;
            pos = pos->next;
        }

        // 插入节点
        if (prev == NULL)
        {
            // 插入到头部
            current->next = sorted;
            sorted = current;
        }
        else
        {
            // 插入到 prev 和 pos 之间
            prev->next = current;
            current->next = pos;
        }

        current = nextNode; // 移动到下一个节点
    }

    return sorted; // 返回排序后的链表头节点
}
