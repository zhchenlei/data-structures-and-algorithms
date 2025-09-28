#include "ArrayQueue.h"

void InitQueue(SqQueue &Q)
{
    Q.front = 0;
    Q.rear = 0;
}

bool IsEmpty(SqQueue Q)
{
    if(Q.front == Q.rear)
    {
        return true;
    }
    return false;
}

bool EnQueue(SqQueue &Q, ElemType x)
{
    if((Q.rear + 1)%MaxSize == Q.front)
    {
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(SqQueue &Q, ElemType &x)
{
    if(Q.front == Q.rear)
    {
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}