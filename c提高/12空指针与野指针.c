/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.空指针
void test01()
{
	char* p = NULL;
	strcpy(p, "1111");//p为空指针往里拷贝数据 err

	char* p2 = 0x1122;//p2指向不合理的地址
	strcpy(p2, "2222");
}

//2.野指针
int* dowork()
{
	int a = 10;
	int* p = &a;
	return p;
}


void test02()
{
	//int* p;
	//pintf("%d", *p);//2.1未初始化指针

	//free后未置空
	int* p2 = malloc(sizeof(int));
	*p2 = 100;
	free(p2);//2.2free后未置空p=NULL；
	//printf("%d", *p2);

	//2.3指针操作超越变量作用域
	int* p3 = dowork();//函数执行完，p3指向的内容被释放，p3成为野指针
	printf("%d\n", *p3);
}

void test03()//空指针可以重复释放
{
	int* p = NULL;
	free(p);
	free(p);

	int* p2 = malloc(4);
	free(p2);
	//free(p2);野指针不可重复释放
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/