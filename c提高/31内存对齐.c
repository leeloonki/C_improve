/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

#pragma pack(show)//默认对齐模数 为8，对齐模数可改为2^n #pragma pack(2)

//对于自定义内存对齐
//1.从第一个属性开始偏移为0；
//2.从第二个属性开始，地址放在该类型整数倍与对齐模数比 取最小值的整数倍
//3.所有属性对齐后二次对齐，属性类型最大值与对齐模数比 取最小整数倍

typedef struct _STUDENT
{
	int a;//0-3
	char b;//4-7
	double c;//8-15
	float d;//15~23
}Student;

void test01()
{
	printf("sizeof(Student) = %d\n", sizeof(Student));//24
}

typedef struct _STUDENT2
{
	char a;//0-7
	Student b;//8-31
	double c;//32-39
}Student2;

void test02()
{
	printf("sizeof(Student2) = %d\n", sizeof(Student2));//40
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/