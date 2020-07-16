/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void test01()
{
	int a = 10;
	
	int* p = &a;
	*p = 20;
	printf("a=%d.\n", a);
}

//对于自定义数据类型
struct Person
{
	char a;
	int b;
	char c;
	int d;
};
void test02()
{
	struct Person p1 = { 'a',10,'b',20 };
	//直接修改
	p1.d = 1000;
	//间接修改
	struct Person* P = &p1;
	P->d = 666;

	printf("P的地址为 = %d\n", P);
	printf("P+1的地址为 = %d\n", P+1);//内存对齐后差16，步长为一个结构体占内存大小 

	char* pPerson = P;
	printf("d = %d \n", *(int*)(pPerson + 12));//+12地址偏移到d，从d首地址开始截取int*个长度即为d所占内存，再解引用得出d
	printf("d = %d \n", *(int*)((int *)pPerson + 3));
}

int main()
{
	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/