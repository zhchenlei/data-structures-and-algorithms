#include <stdio.h>

int main()
{
    int arr[5] = {100, 200, 1000, 500, 10};
    for(int i = 0; i < 5; i++)
    {
       // printf("a[%d]=%5d,address is %p;\n",i,arr[i],&arr[i]);
        printf("a[%d]=%5d,内存地址是 %llu;\n",i,arr[i],(unsigned long long)&arr[i]);
    }
    return 0;
}
