/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1.sizeof 不是函数，是操作符，类似 + - 运算符
void test01()
{
	printf("size of int\t = %d.\n", sizeof(int));//4

	double d = 3.14;
	//对变量使用sizeof可不加括号
	printf("size of d\t = %d.\n", sizeof d);//8
}

//2.sizeof返回值类型是  unsigned int
void test02()
{
	unsigned int a = 10;
	if (a - 20 > 0)
	{
		printf("大于零\n");//大于零
	}
	else
	{
		printf("小于零\n");
	}

	//输出大于零，unsigned int 与int 运算结果为unsigned
	//sizeof(int)-5 =-1;用%u打印无符号：%u = 4294967295.
	//%d打印的为有符号数字结果：%d = -1.
	printf("%%u = %u.\n", sizeof(int)-5);
	printf("%%d = %d.\n", sizeof(int)-5);
}


//3sizeof统计数组长度
//当数组名做函数参数时，
void calculatearray(int arr[])
{
	printf("calculatearray(int arr[]) sizeof(arr)形参 ：%d\n", sizeof(arr));//4，退化为指针，指向数组中第一个元素
}

void test03()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	printf("数组arr[]中sizeof(arr)：%d\n", sizeof(arr));//4*8

	calculatearray(arr);
}

int main()
{
	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/