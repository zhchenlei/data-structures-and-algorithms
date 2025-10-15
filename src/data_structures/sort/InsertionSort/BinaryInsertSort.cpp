#include<stdio.h>

void binaryinsertsort(int a[], int n)
{
    int i = 0, j = 0, temp = 0;
    int low = 0, high = 0, mid = 0;

    //第一个元素是有序的，从第二个元素开始插入
    for( i = 1; i < n; i++)
    {
        temp = a[i];
        low = 0;
        high = i - 1;
        //二分查找插入位置
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(a[mid] > temp)   //在左边
                high = mid - 1;
            else    //在右边
                low = mid + 1;
        }
        //将插入位置之后的元素后移
        for(j = i - 1; j >= high + 1; j--)
        {
            a[j + 1] = a[j];
        }
        a[high + 1] = temp; //插入
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
    binaryinsertsort(a,5);
    printarr(a,5);
    return 0;
}