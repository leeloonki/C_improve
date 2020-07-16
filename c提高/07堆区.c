/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int* getSpace()
{
	int* p = malloc(sizeof(int) * 5);//堆区开辟
	
	if (p == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < 5; i++)
	{
		p[i] =i+ 100;
	}
	return p;
}

void test01()
{
	int* p = getSpace();

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	
	free(p);
	p = NULL;//置空，防止野指针
}

//注意事项
void allocatespace(char * pp)
{
	char *temp =malloc(100);
	if (temp == NULL)
	{
		return NULL;
	}
	memset(temp, 0, 100);//内存拷贝；（拷贝的内存地址，拷贝数据，拷贝大小）
	strcpy(temp, "hello world");//字符串拷贝
	pp = temp;
}

void test02()
{
	char* p = NULL;
	allocatespace(p);//函数运行时，在栈区创建临时指针pp，将拷贝的一份hello world 地址temp给pp；但函数运行后pp被释放，与p无关
	printf("%s\n", p);//p不被修饰，结果为null并非期待的hello world，
}

//改进
void allocatespace2(char** pp)
{
	char* temp = malloc(100);
	if (temp == NULL)
	{
		return NULL;
	}
	memset(temp, 0, 100);
	strcpy(temp, "hello world");
	*pp = temp;//pp存放p的地址，*pp即为p，将hello world地址给p；

}

void test03()
{
	char* p = NULL;
	allocatespace2(&p);
	printf("%s\n", p);
	
	free(p);
	p = NULL;
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/