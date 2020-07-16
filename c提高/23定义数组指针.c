/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//数组指针: 指向数组的指针int (*p)[10]
//指针数组：存放指针的数组int *p [10]

//如何创建数组指针？
//1.先定义数组的类型，再通过类型创建数组指针
void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	typedef int(ARRAY_TYPE)[5];//ARRAY_TYPE是一个数据类型，代表了有5个int类型元素的数据
	ARRAY_TYPE* arrP=&arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (*arrP)[i]);
	}
	
}

//2.先定义数组指针的类型，再创建数组指针变量，
void test02()
{
	int arr[5] = { 1,2,3,4,5 };
	typedef int(*ARRAY_TYPE)[5];
	ARRAY_TYPE arrP = &arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (*arrP)[i]);
	}

}

//3.直接创建数组指针变量
void test03()
{
	int arr[5] = { 1,2,3,4,5 };
	int(*arrP)[5] = &arr;//类比int a=5;int *p=&a;// arr[n] (*arrP)[n]   n必须相同


	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (*arrP)[i]);
	}
}
int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/