#include "ArrayQueue.h"

int main()
{
    int x = 0;
    SqQueue Q;
    InitQueue(Q);
    EnQueue(Q, 9);
    EnQueue(Q, 8);
    EnQueue(Q, 7);
    while (!IsEmpty(Q))
    {
        DeQueue(Q,x);
        printf("当前队头元素为 %d \n",x);
    }
    return 0;
}