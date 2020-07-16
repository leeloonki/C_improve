/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 


void test01()
{
	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int arr2[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int arr3[][3] = { 1,2,3,4,5,6,7,8,9 };

	int(*p)[3] = arr;
	//二维数组可看成三个一维数组
	//二维数组名称 指向第一个（一维数组）的指针，有三个int[3]类型的数组，p指向第一个的地址

	//特殊情况1
	printf("sizeof(arr)=%d\n", sizeof arr);//4*9=36 统计数组长度

	int(*p2)[3][3] = &arr;//对数组名取地址，二维数组指针变量

	//访问二维数组中的6
	printf("%d\n", arr[1][2]);
	printf("%d\n", *(*(arr + 1) + 2));//原理，*(arr + 1)为第二行int[3]的首地址，即为4的地址
}


//二维数组做函数参数
//void printfarray(int [3][3], int row, int col)//参数效果相同（int [][3], int row, int col）
void printfarray(int (*p)[3],int row,int col)//二维数组退化为一维数组指针
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	
}

void test02()
{
	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//
	printfarray(arr,3,3);
}
int main()
{
	
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/