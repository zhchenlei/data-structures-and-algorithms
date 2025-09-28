#include <stdio.h>
#include <malloc.h>

typedef int ElemType;

typedef struct LinkNode
{
    ElemType data;
    struct LinkNode* next;
}LiStack, *Lhead;

void InitStack(Lhead &L);
bool EmptyStack(Lhead L);
bool PushStack(Lhead &L, ElemType x);
bool PopStack(Lhead &L, ElemType &x);


