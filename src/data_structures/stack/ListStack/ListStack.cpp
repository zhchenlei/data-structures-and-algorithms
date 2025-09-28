#include "ListStack.h"

void InitStack(Lhead &L)
{
    L = (LiStack*)malloc(sizeof(LiStack));
    L->next = NULL;
}
bool EmptyStack(Lhead L)
{
    if(L->next == NULL)
    {
        return true;
    }
    return false;
}

bool PushStack(Lhead &L, ElemType x)
{
    LiStack* p = (LiStack*)malloc(sizeof(LiStack));
    if(p == NULL)
    {
        return false;
    }
    p->data = x;
    p ->next = L->next; //带头结点
    L->next = p;
    return true;
}

bool PopStack(Lhead &L, ElemType &x)
{
    if(EmptyStack(L)) return false;
    x = L->next->data;
    LiStack* p = L->next;
    L->next = p->next;
    free(p);
    return true;
}