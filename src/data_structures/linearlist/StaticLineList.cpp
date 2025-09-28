#include<stdio.h>
#include<malloc.h>
#define INIT_SIZE 100 //表长度的初始定义 
typedef int ElemType;//定义数据元素类型 
typedef struct{
	ElemType *data;//指示动态分配数组的指针 
	int maxsize,length;//数组的最大容量和当前个数  
}SqList;//动态分配数组顺序表的类型定义 
int main(){
	//创建了一个线性表 
	SqList sq;
	sq.maxsize=INIT_SIZE;
	sq.length=5;
	sq.data =(ElemType*) malloc(sizeof(ElemType)*INIT_SIZE);//malloc函数动态申请内存空间 
	sq.data[0]=100;
	sq.data[1]=1000;
	sq.data[2]=8;
	sq.data[3]=15;
	sq.data[4]=200;
	//循环打印每个数据元素以及内存地址 
	for(int i=0;i<5;i++){
		printf("data[%d]=%5d, 内存地址: %llu\n",i,sq.data[i],(unsigned long long)&sq.data[i]); 
	}
	return 0;
} 