#include<stdio.h>

void quicksort(int a[], int n)
{
    if(n <= 1)  //递归终止条件
        return;
    int i = 0, j = n - 1;
    int pivot = a[0];   //基准值，通常取第一个元素
    while(i < j)
    {
        while(i < j && a[j] >= pivot) //从右向左找第一个小于pivot的值
            j--;
        if(i < j)
            a[i++] = a[j];  //将该值放到左边合适的位置，i++表示下一个位置
        while(i < j && a[i] <= pivot) //从左向右找第一个大于pivot的值
            i++;
        if(i < j)
            a[j--] = a[i];  //将该值放到右边合适的位置，j--表示下一个位置
    }
    a[i] = pivot;   //基准值放到最终位置
    quicksort(a, i);   //递归处理左子序列
    quicksort(a + i + 1, n - i - 1); //递归处理右子序列
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
    quicksort(a,5);
    printarr(a,5);
    return 0;
}