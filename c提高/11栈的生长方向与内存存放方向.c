/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.栈的生长方向
void test01()
{
	int a = 10;//a在栈底高地址
	int b = 20;
	int c = 30;
	int d = 40;//b栈顶 低地址
	printf("a = %d\n", &a);
	printf("b = %d\n", &b);
	printf("c = %d\n", &c);
	printf("d = %d\n", &d);
}

//2.内存存放方向
void test02()
{
	int a = 0xaabbccdd;
	unsigned char* p = &a;

	//低位字节数据低地址，高位字节数据高地址（小端对齐）
	printf("%x\n", *p);//dd
	printf("%x\n", *(p+1));//cc
}
int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/