#include "allinclude.h" // DO NOT edit this line
#include <stdlib.h>     // 用于动态内存分配

struct studentNode *CreateLinkList(struct student s[], int n)
{
    struct studentNode *head = NULL; // 初始化链表头指针为空
    struct studentNode *tail = NULL; // 用于指向链表的尾节点

    for (int i = 0; i < n; i++)
    {
        // 为新节点分配内存
        struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode));

        // 复制数据
        strncpy(newNode->name, s[i].name, sizeof(newNode->name) - 1);
        newNode->name[sizeof(newNode->name) - 1] = '\0'; // 确保字符串以 '\0' 结尾
        newNode->birth = s[i].birth;
        newNode->next = NULL;

        // 将新节点加入链表
        if (head == NULL)
        {
            head = newNode; // 若是第一个节点，设置为头节点
        }
        else
        {
            tail->next = newNode; // 否则，添加到链表尾部
        }
        tail = newNode; // 更新尾节点指针
    }

    return head; // 返回链表的头指针
}
