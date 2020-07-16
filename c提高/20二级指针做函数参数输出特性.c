//二级指针做函数参数的输出特性
//被调函数分配内存，主调函数使用
/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void allocatespace(int **pp)
{
	int *arr =malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 10;
	}
	*pp = arr;//*pp即为p，将malloc连续内存地址给p
}

void printfarray(int **pp,int len)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", (*pp)[i]);//(*pp)得出数组名
	}
}

void freespace(int** p2)
{
	if (*p2 != NULL)//*p2为p本身
	{
		free (*p2);
		*p2 = NULL;
	}
}

void test01()
{
	int* p = NULL;
	allocatespace(&p);

	printfarray(&p, 10);

	freespace(&p);//p2与p指向同一内存，p2释放置空后p变为野指针
	if (p == NULL)
	{
		printf("p为空指针\n");//p为空指针
		
	}
	else
	{
		printf("p为野指针\n");
		p = NULL;
	}
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
*/