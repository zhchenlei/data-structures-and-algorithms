#include<stdio.h>

int main()
{
    int Queue[5];
    int front = 0, rear = 0;
    Queue[rear++] = 9;
    Queue[rear++] = 8;
    Queue[rear++] = 7;

    //先进先出
    while (front != rear)
    {
        printf("当前队头元素为 %d \n",Queue[front++]);
    }

    return 0;
}