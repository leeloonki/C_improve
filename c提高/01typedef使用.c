/*
#define _CRT_SECURE_NO_WARNINGS //VS不建议使用传统库函数，如果不用这个宏，报错c4996
#include<stdio.h>  //标准输入输出
#include<string.h> //
#include<stdlib.h> //malloc free在这个头文件中

//typedef作用：
//1. typedef 简化结构体关键字 struct

//struct Person
//{
//	char name[64];
//	int age;
//};
//
//typedef struct Person myPerson;

typedef struct Person
{
	char name[64];
	int age;
}myPerson;

void test01()
{
	struct Person p1 = { "zhangsan",19 };
	myPerson p2 = { "lisi",20 };
	//struct Person与myPerson类型相同
}

//2.区分数据类型
void test02()
{
	//char* p1, p2;// p1是char *，p2是char
	typedef char* PCHAR;
	PCHAR p1, p2;//p1p2均为char*类型
	//或者
	char *p3, * p4;
}

//3.提高代码移植性
typedef long long MYINT;  
void test03()
{
	//long long a = 10;
	//long long a2 = 10;
	MYINT a = 10;
	MYINT a2 = 10;
}
int main()
{
	test01();
	

	system("pause");
	return EXIT_SUCCESS; //正常退出 0 
}
*/