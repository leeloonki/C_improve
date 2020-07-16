/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//例：对int类型从小到大选择排序
void selectsort01(int arr[],int len)//int arr[]
{
	for (int i = 0; i < len; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int temp = arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}
void printfarray(int*arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *arr++);
	}
}

void test01()
{
	int arr[] = { 3,2,5,1,4 };
	int len = sizeof(arr) / sizeof(int);
	selectsort01(arr, len);
	printfarray(arr, len);
}

//通过选择排序算法，实现对指针数据的降序排序

void printfarray02(int* p, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", *p++);//p[i]
	}
}

void selectsort02(char*p[],int len)//char*p[]等价于char**p
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			//if (p[max] < p[j]) char*的字符串比较是指针之间比较，不合理
			if (strcmp(p[max], p[j])<0)
			{
				max = j;
			}
		}

		if (max != i)
		{
			char* temp = p[i];
			p[i] = p[max];
			p[max] = temp;
		}
	}
}

void test02()
{
	char* parr[] = { "aaa","bbb","fff","ddd","eee","ccc" };
	int len = sizeof(parr) / sizeof(char*);//
	selectsort02(parr, len);
	printfarray02(parr, len);
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/