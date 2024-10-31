#include "allinclude.h" // DO NOT edit this line

struct node *inverse(struct node *L)
{
    struct node *prev = NULL;     // 用于指向前一个节点，初始化为 NULL
    struct node *current = L;     // 用于遍历链表的当前节点
    struct node *nextNode = NULL; // 用于存储下一个节点

    while (current != NULL)
    {
        nextNode = current->next; // 保存当前节点的下一个节点
        current->next = prev;     // 反转当前节点的指针，使其指向前一个节点
        prev = current;           // 更新前一个节点为当前节点
        current = nextNode;       // 移动到下一个节点
    }

    return prev; // 逆置后的新头节点
}
