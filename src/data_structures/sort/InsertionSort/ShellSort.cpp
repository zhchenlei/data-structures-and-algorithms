#include<stdio.h>

void shellsort(int a[], int n)
{
    int gap = n;    //初始增量
    int i = 0, j = 0, temp = 0;
    do
    {
        gap = gap / 3 + 1;   //动态增量
        for(i = gap; i < n; i++) //从第gap个元素开始，逐个对其所在组进行插入排序
        {
            if(a[i] < a[i - gap]) //当前元素比有序部分元素最后一个元素小-->换位；
            {
                temp = a[i];
                for(j = i - gap; j >= 0 && a[j] > temp; j -= gap) //后移小于temp的元素
                {
                    a[j + gap] = a[j];    //后移
                }
                a[j + gap] = temp; // a[j] 比temp小，插入到a[j]后面
            }
        }
    }
    while(gap > 1); //增量为1时，最后进行一次普通插入排序,
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
    shellsort(a,5);
    printarr(a,5);
    return 0;
}