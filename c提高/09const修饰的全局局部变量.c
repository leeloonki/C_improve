/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.const修饰的全局变量
const int a = 10;

void test01()
{
	//a=100;//直接修改失败
	int* p = &a;
	*p = 100;//语法通过，运行错误
	printf("a= %d\n", a);
}

//2.const修饰的局部变量（伪常量）
void test02()
{
	const int b = 10;//分配到栈区
	//b = 100;//直接修改失败

	int* p = &b;
	*p = 100;//语法通过，运行正确
	printf("b= %d\n", b);

	//int a[b];//伪常量不可初始化数组

}

//3.字符串常量
void test03()
{
	char* p1 = "hello world";
	char* p2 = "hello world";
	char* p3 = "hello world";

	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", p3);
	printf("%p\n", &"hello world");
	//vs中四次打印%p地址相同，优点:节省空间

	p1[0] = 'z';
	printf("%c\n", p1[0]);//不同编译器不同处理方式，有的可以修改字符串常量，有的不可
}
int main()
{
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/