/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//提供一个函数，可以将任意数据类型打印出来,int 和struct person类型

//打印int
void printftext(void *a,void(*myprint)(void*))
{
	myprint(a);
}

void myprintInt(void* data)
{
	int* num = data;
	printf("%d\n", *num);
}

void test01()
{
	int a=100;
	printftext(&a,myprintInt);
}

//打印结构体
struct person
{
	char name[64];
	int age;
};

void myprintStructperson(void* data)
{
	struct person* num = data;
	printf("%s，%d\n", num->name,num->age);
}

void test02()
{
	struct person p = { "WFY",19 };
	printftext(&p, myprintStructperson);
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/