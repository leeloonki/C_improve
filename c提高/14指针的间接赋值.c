/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void changevalue(int *p)
{
	*p = 100;
}

void test01()
{
	int a = 10;
	printf("a = %d\n", a);
	changevalue(&a);
	printf("a = %d\n", a);
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
*/