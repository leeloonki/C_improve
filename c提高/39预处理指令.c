/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//宏定义
//不重视作用域，可用nudef卸载宏
//宏定义常量无数据类型

//条件编译
//#define DEBUG

#ifdef DEBUG
void func()
{
	printf("debug调用\n");
}

#else
	#if 0//自定义条件编译

	void func()
	{
		printf("release1调用\n");
	}
	#else
	void func()
	{
		printf("release2调用\n");
	}
	#endif

#endif


void test01()
{
	#define MAX 1024

	printf("%d\n", MAX);

	#undef MAX
	//printf("%d\n", MAX);
}

//特殊宏
void doWork(char*p)
{
	if (p == NULL)
	{
		printf("文件名:%s\n", __FILE__);
		printf("行号：%d\n", __LINE__);
		printf("日期：%s\n", __DATE__);
		printf("编译时间：%s\n", __TIME__);

		return;
	}
}

void test02()
{
	doWork(NULL);
}

int main()
{
	test02();

	func();

	system("pause");
	return EXIT_SUCCESS;
}
*/