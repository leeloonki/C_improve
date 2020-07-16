/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//提供一个函数，可以打印任意类型的数组
void printfAllArray(void *arr,int elemSize,int len,void(*myfunc)(void *))
{
	char* p = arr;
	for (int i = 0; i < len; i++)
	{
		char*elemaddr=p + i * elemSize;//每个元素首地址
		//printf("%d\n", *(int*)elemaddr);

		myfunc(elemaddr);
	}
}

void myprintint(void* data)
{
	int*num= data;
	printf("%d\n", *num);
}

void test01()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);
	printfAllArray(arr,sizeof(int), len,myprintint);
}

struct Person
{
	char name[64];
	int age;
};

void myprintStruct(void* data)
{
	struct Person* P = data;
	printf("%s,%d\n", P->name, P->age);
}

void test02()
{
	struct Person parray[] =
	{
		{"aaa",10},
		{"bbb",20},
		{"ccc",30},
		{"ddd",40}
	};
	int len = sizeof(parray) / sizeof(struct Person);//len:每个数组成员的长度
	printfAllArray(parray, sizeof(struct Person), len, myprintStruct);
}

//参数1 数组首地址，参数2每个元素占内存空间，参数3 元素个数 参数4 查找元素的地址
int myFindStruct(void* arr, int elemSize, int len,void *data,int(*myCompare)(void *data1,void *data2))
{
	char* p = arr;
	for (int i = 0; i < len; i++)
	{
		char* elemAddr = p + elemSize * i;//获取每个元素首地址

		//if(elemAddr和data元素相等返回真（1）)//
		if (myCompare(elemAddr, data))
		{
			return 1;
		}
		
	}
	return 0;
}

int myCompareperson(void* elemAddr, void* data)
{
	struct Person* p1 = elemAddr;
	struct Person* p2 = data;
	if (p1->age == p2->age && strcmp(p1->name ,p2->name)==0)
	{
		return 1;
	}
	return 0;
}

void test03()
{
	struct Person parray[] =
	{
		{"aaa",10},
		{"bbb",20},
		{"ccc",30},
		{"ddd",40}
	};

	struct Person p = { "ccc",30 };
	//查找数组中的元素，查到返回1，查不到0
	int len = sizeof(parray) / sizeof(struct Person);

	int ret = myFindStruct(parray, sizeof(struct Person), len, &p,myCompareperson);

	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
}

int main()
{
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/