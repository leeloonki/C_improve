/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

//1.限定函数返回值
void test01()
{
	return 1;
}

//2.限定函数参数列表
int func2(void)
{
	return 10;
}

void test2()
{
	printf("%d\n",func2(1));//func2无形参，执行时警告
}

//3.void* 万能指针
void test3()
{
	void* pVoid = NULL;
	int* pInt = NULL;
	char* pChar = NULL;

	pChar = (char*)pInt;
	pChar = pVoid;//万能指针不需要强制类型转换即可赋值

	printf("size of void * = %d\n",sizeof(pVoid));//4
	printf("size of int * = %d\n", sizeof(pInt));//4
	printf("size of char * = %d\n", sizeof(pChar));//4
	//size of T* = 4 
}

int main()
{
	//test01();//能正常调用，但会警告
	//test2();
	test3();
	system("pause");
	return EXIT_SUCCESS; //正常退出 0 
}*/