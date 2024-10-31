#include "allinclude.h" //DO NOT edit this line

char *oldest(struct studentNode *L)
{
    // 检查空链表情况
    if (L == NULL)
    {
        return NULL;
    }

    struct studentNode *oldest_node = L; // 假设第一个节点为年龄最大
    struct studentNode *current = L->next;

    // 遍历链表
    while (current != NULL)
    {
        // 比较出生日期，若 current 的日期小于 oldest_node，更新 oldest_node
        if (current->birth.year < oldest_node->birth.year ||
            (current->birth.year == oldest_node->birth.year && current->birth.month < oldest_node->birth.month) ||
            (current->birth.year == oldest_node->birth.year && current->birth.month == oldest_node->birth.month && current->birth.day < oldest_node->birth.day))
        {
            oldest_node = current;
        }
        current = current->next; // 移动到下一个节点
    }

    return oldest_node->name; // 返回年龄最大者的名字
}
