#include<stdio.h>
#define MAXSIZE 100

int BinarySearch(int arr[],int n, int key)
{
    int low = 0, high = n - 1, mid = 0;
    while(low <= high)
    {
        mid = (low + high) /2;
        if(arr[mid] == key)
            return mid;   // 返回下标
        else if(arr[mid] < key) // 中间值小于key
            low = mid + 1; // 继续在右半部分查找
        else    // 中间值大于key
            high = mid - 1; // 继续在左半部分查找
    }
    return -1;  // 未找到返回-1
}

int main()
{
    int arr[MAXSIZE]= {5, 6, 8, 10, 13, 18, 100};
    int n = 7;
    int key = 10;
    int res = BinarySearch(arr, n, key);
    printf("res= %d\n", res);    // res=3
    
    return 0;
}