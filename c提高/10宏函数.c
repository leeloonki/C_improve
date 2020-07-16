/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

#define MYADD(x,y) x+y;
//宏函数要保证运算的完整性
//一定程度上比普通函数效率高，普通函数入栈出栈会有开销

int myadd(int x, int y)
{
	return x + y;//入栈出栈，时间开销
}

void test01()
{
	int a = 10, b = 20;

	int ret = MYADD(a, b);//a+b
	printf("a+b = %d\n", ret);

	//ret = MYADD(a, b) * 20;//a+b*20 410
	//printf("a+b = %d\n", ret);
}

int main()
{
	test01();
	//c/c++中（cdecl调用惯例）参数传递顺序从右向左，主调函数管理出栈

	system("pause");
	return EXIT_SUCCESS;
}
*/