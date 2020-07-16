/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.输入特性：主调函数分配内存，被调函数使用内存

void func(char*p)
{
	strcpy(p, "hello world");
}


void test01()
{
	//分配到栈
	char buf[1024] = { 0 };
	func(buf);
	printf("%s\n", buf);
}

void printfstring(char*str)
{
	printf("%s\n", str);
}

void test02()
{
	//分配到堆
	char*p=malloc(sizeof(char) * 64);
	memset(p, 0, 64);

	strcpy(p, "hello world");
	printfstring(p);
	free(p);
	p = NULL;
}

//2.输出特性，被调函数分配内存，主调函数使用内存
void allocatespace(char**pp)
{
	char* temp=malloc(sizeof(char) * 64);
	memset(temp, 0, 64);
	strcpy(temp, "hello world");
	*pp = temp;
}

void test03()
{
	char* p = NULL;
	allocatespace(&p);
	printf("%s\n", p);

}

int main()
{
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/