/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void func(int a,char b)
{
	printf("hello world\n");
}

int test1()
{
	func(1, 'a');
	printf("%d\n", func);
	int address = func;
	return address;
}

void test2()
{
	int addr = test1();

	//等号左边是函数指针，void(*)(int, char)将地址addr转为函数类型
	void (*pfuncpointer)(int, char) = (void(*)(int, char))addr;

	pfuncpointer(1, 'a');//函数名称是函数首地址
}

//函数指针定义方式
void test01()
{
	int arr[5];
	//数组指针定义
	int(*parr)[5];

	//函数定义方式1
	//先定义函数类型，再通过类型定义函数指针
	typedef void(FUNC_TYPE)(int, char);

	FUNC_TYPE* pFunc = func;

	pFunc(1,'a');
}

void test02()
{

	//函数定义方式2
	//先定义函数指针类型，再定义函数指针
	typedef void(*FUNC_TYPE)(int, char);

	FUNC_TYPE pFunc = func;

	pFunc(1,'a');
}

void test03()
{
	
	//函数定义方式3
	//直接定义函数指针类变量
	
	//void (*)(int,char)
	void (*pfunc)(int, char)= func;//与第二种类似
}

void func1()
{
	printf("func1()调用\n");
}

void func2()
{
	printf("func2()调用\n");
}

void func3()
{
	printf("func3()调用\n");
}

void func4()
{
	printf("func4()调用\n");
}

void test04()
{
	void(*pfunc[4])();//函数指针定义方式
	pfunc[0] = func1;
	pfunc[1] = func2;
	pfunc[2] = func3;
	pfunc[3] = func4;
	for (int i = 0; i < 4; i++)
	{
		pfunc[i]();
	}
}

//指针函数
int* func()
{	}

//函数指针：指向函数的指针
//指针函数：函数返回值是指针的函数

int main()
{
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}
*/