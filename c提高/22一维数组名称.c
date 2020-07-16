/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void printfarr(int arr[],int len)//int arr[]==int *arr
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr + i));
	}
}
void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	//数组名不是指针
	printf("sizeof arr =%d\n", sizeof(arr));
	//除两种特殊情况，一维数组名称都是指针首元素的地址

	//1.对数组名称sizeof
	//2.对数组名称取地址,步长为20，跳跃整个数组长度
	//int* p = &arr;
	//printf("%d\n",&arr); //7337544	
	//printf("%d\n",&arr+1);//7337564

	//数组名称是指针常量 指针的指向不可修改
	//arr = NULL;//错误，指向不可修改 等价于 int *const p
	int len = sizeof(arr) / sizeof(int);
	printfarr(arr,len);

	int* p = arr;
	p = p + 3;
	printf("%d\n", p[-1]);//p=p+3后，p[0]=4,p[-1]向左 移一个元素 变为3 （1 2 3 4 5）
	printf("%d\n", *(p-1));//等价
}

int main()
{
	test01();//20
	system("pause");
	return EXIT_SUCCESS;
}
*/