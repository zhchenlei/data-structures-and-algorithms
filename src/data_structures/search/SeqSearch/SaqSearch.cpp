#include<stdio.h>
#define MAXSIZE 100

int SeqSearch(int arry[], int n, int key)   // 顺序查找
{
    for (int i = 0; i < n; i++)
    {
        if (arry[i] == key)
            return i;   // 返回下标
    }
    return -1;  // 未找到返回-1
}

int main()
{
    int arry[MAXSIZE] = {100, 1000, 8, 15, 200, 70};    
    int n = 6;
    int res = SeqSearch(arry, n, 15);   
    printf("res=%d\n", res);    // res=3
    return 0;
}