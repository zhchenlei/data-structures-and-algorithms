#include "ListStack.h"

int main()
{
    ElemType x = 0;
    Lhead L;
    InitStack(L);
    PushStack(L,9);
    PushStack(L,8);
    PushStack(L,7);

    while (!EmptyStack(L))
    {
        PopStack(L,x);
        printf("栈顶元素为: %d\n",x);
    }
    return 0;
}