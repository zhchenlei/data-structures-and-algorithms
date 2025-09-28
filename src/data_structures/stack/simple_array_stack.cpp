#include <stdio.h>

int main()
{
    int stack[5];
    int top = -1;
    int bottom = 0;
    stack[++top] = 9;
    stack[++top] = 8;
    stack[++top] = 7;

    while (top >= bottom)
    {
        printf("当前栈顶元素是%d\n",stack[top--]);  //先进后出
    }
}