#include "ArrayStack.h"

int main()
{
    SqStack s;       
    ElemType x = 0;  

    StackInit(s); 
    PushStack(s, 9);
    PushStack(s, 8);
    PushStack(s, 7);

    while (!StackEmpty(s))
    {
        PopStack(s, x);
        printf("栈顶元素为%d\n", x);
    }

    return 0;
}