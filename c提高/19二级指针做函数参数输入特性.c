/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
//二级指针做函数参数的输入特性
//主调函数分配内存，被调函数使用
void printfarray(int** pp, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n",**pp);
		pp++;
	}
}

//堆区创建
void test01()
{
	//堆区分配
	int** p = malloc(sizeof(int*) * 5);
	//栈上创建数据
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	int a4 = 40;
	int a5 = 50;
	p[0] = &a1;
	p[1] = &a2;
	p[2] = &a3;
	p[3] = &a4;
	p[4] = &a5;

	printfarray(p, 5);
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	
}

//栈上创建
void test02()
{
	int* parray[5];//
	for (int i = 0; i < 5; i++)
	{
		//数据在堆区
		parray[i] = malloc(4);
		*parray[i] = i * 10;
	}
	int len = sizeof(parray) / sizeof(int*);
	printfarray(parray, len);

	for (int i = 0; i < 5; i++)
	{
		if (parray[i] != NULL)
		{
			free(parray[i]);
			parray[i] = NULL;
		}
	}
}

int main()
{
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
//栈区堆区创建的可用一个打印函数
*/