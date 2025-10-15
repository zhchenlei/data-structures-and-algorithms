#include<stdio.h>

void insertsort(int a[], int n)
{
    int i = 0, j = 0, temp = 0;
    //第一个元素是有序的，从第二个元素开始插入
    for( i = 1; i < n; i++ )    
    {
        // 当前元素比有序部分元素最后一个元素小-->换位；
        // 如果比最后一个元素大，则没必要换位
        if(a[i] < a[i - 1])
        {
            temp = a[i];
            for(j = i - 1; j >= 0 && a[j] > temp; j--) //后移小于temp的元素
            {
                a[j + 1] = a[j];    //后移
            }
            a[j + 1] = temp; // a[j] 比temp小，插入到a[j]后面
        }
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
    insertsort(a,5);
    printarr(a,5);
    return 0;
}