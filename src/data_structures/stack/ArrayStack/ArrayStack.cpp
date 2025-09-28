#include "ArrayStack.h"

void StackInit(SqStack &S)
{
    S.top = -1;  // 栈顶指针初始化为 -1
}

bool StackEmpty(SqStack S)
{
    if (S.top == -1)
    {
        return true;
    }
    return false;
}


bool PushStack(SqStack &S, ElemType x)
{
    if (S.top == MaxSize - 1)
    {
        return false; // 栈满
    }
    S.data[++S.top] = x;
    return true;
}


bool PopStack(SqStack &S, ElemType &x)
{
    if (S.top == -1)
    {
        return false; // 栈空
    }
    x = S.data[S.top--];
    return true;
}


bool GetStackTop(SqStack S, ElemType &x)
{
    if (S.top == -1)
        return false;
    x = S.data[S.top];
    return true;
}