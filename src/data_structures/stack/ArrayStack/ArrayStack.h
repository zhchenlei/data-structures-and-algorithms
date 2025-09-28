#include <stdio.h>

#define MaxSize 50
#define ElemType int

/* 顺序栈类型：静态数组存储 */
typedef struct
{
    ElemType data[MaxSize]; 
    int top;               
} SqStack;

void StackInit(SqStack &S);
bool StackEmpty(SqStack S);
bool PushStack(SqStack &S, ElemType x);
bool PopStack(SqStack &S, ElemType &x);
bool GetStackTop(SqStack S, ElemType &x);
