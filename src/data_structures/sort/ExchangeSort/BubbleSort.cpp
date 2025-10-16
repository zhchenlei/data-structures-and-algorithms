#include<stdio.h>

void bubblesort(int a[], int n)
{
    int i = 0, j = 0, temp = 0;
    int flag = 0;   //标志位，若某趟没有交换，则说明有序，提前结束
    for(i = 0; i < n - 1; i++) //n-1趟
    {
        flag = 0;   //每趟开始前，标志位置0
        for(j = 0; j < n - 1 - i; j++) //每趟比较n-1-i次
        {
            if(a[j] > a[j + 1]) //前一个比后一个大，交换
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;   //发生了交换，标志位置1
            }
        }
        if(flag == 0)   //某趟没有交换，说明有序，提前结束
            break;
    }
}

void printarr(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[5] = {8, 3, 5, 4, 6};    //3 4 5 6 8
    printarr(a,5);
    bubblesort(a,5);
    printarr(a,5);
    return 0;
}