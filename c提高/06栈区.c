/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int* func()
{
	int a = 10;
	return &a;//不要返回局部变量的地址，该函数执行完，其中的内存被释放
}

void test01()
{
	int* p = func;
	printf("a=%d\n", *p);//无意义，func中a的内存已经被释放

}

char* getString()
{
	char str[] = "hello world";//常量区的hello world复制一份到栈区中给str
	return str;//str在堆区创建，在此函数运行后同样被释放
}

void test02()
{
	char* p = NULL;
	p = getString(); //函数返回str后，p中存放str地址，但str中的hello world被释放
	printf("%s\n.", p);//错误
}

int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/