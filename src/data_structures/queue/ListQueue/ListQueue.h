#include<stdio.h>
#include<malloc.h>

typedef int ElemType;
//  链队结点类型
typedef struct LinkNode
{
    ElemType data;
    struct LinkNode *next;
}LinkNode; 

//  链队类型
typedef struct 
{
    LinkNode *front;    // 队头指针
    LinkNode *rear; // 队尾指针
} LinkQueue;

void InitQueue(LinkQueue &Q);
bool IsEmpty(LinkQueue Q);
bool EnQueue(LinkQueue &Q, ElemType x);
bool DeQueue(LinkQueue &Q, ElemType &x);  
