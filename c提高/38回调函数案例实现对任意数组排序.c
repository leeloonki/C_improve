/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void selectSort(void *arr,int elemSize,int len,int(*myCompare(void *,void *)))
{

	char* ptemp = malloc(elemSize);//只开辟一次，复用，

	for (int i = 0; i < len; i++)
	{
		int minOrmax = i;//定义最小值和最大值
		for (int j = i + 1; j < len; j++)
		{
			//j下标的地址
			char* pj = (char*)arr + j * elemSize;
			char* pminOrmax = (char*)arr + minOrmax * elemSize;
			if (myCompare(pj,pminOrmax))
			{
				minOrmax = j;//更新真实最小值最大值下标
			}
		}
		if (i != minOrmax)
		{
			//交换数据
			char* pI = (char*)arr + i * elemSize;
			char* pMINORMAX = (char*)arr + minOrmax * elemSize;

			//char* ptemp = malloc(elemSize);
			memcpy(ptemp,pI,elemSize);//内存拷贝
			memcpy(pI, pMINORMAX, elemSize);
			memcpy(pMINORMAX, ptemp, elemSize);

		}
	}

	if (ptemp != NULL)
	{
		free(ptemp);
		ptemp = NULL;
	}
}

int mycompareInt(void *data1,void *data2)
{
	int* num1 = data1;
	int* num2 = data2;

	//从小到大
	//if (*num1< * num2)
	//{
	//	return 1;
	//}
	//return 0;

	return *num1 < *num2;
}

void test01()
{
	int arr[] = { 10,40,30,20,50 };
	int len = sizeof(arr) / sizeof(int);
	selectSort(arr, sizeof(int), len, mycompareInt);

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

struct Person
{
	char name[64];
	int age;
};

int mycomparePerson(void* data1, void* data2)
{
	struct Person* p1 = data1;
	struct Person* p2 = data2;

	//从小到大
	//if (*num1< * num2)
	//{
	//	return 1;
	//}
	//return 0;

	return (p1->age) > (p2->age) ;
}

void test02()
{
	struct Person Parry[] =
	{
		{"aaa",21},
		{"bbb",32},
		{"ccc",25},
		{"ddd",22},
	};

	//按年龄从大到小排序
	int len = sizeof(Parry) / sizeof(struct Person);
	selectSort(Parry, sizeof(struct Person), len, mycomparePerson);

	for (int i = 0; i < len; i++)
	{
		printf("%s,%d\n", Parry[i].name,Parry[i].age);
	}
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/