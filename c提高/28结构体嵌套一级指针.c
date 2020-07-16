/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//创建一个结构体指针，每个指针指向一个结构体，每个结构体含一个char*类型的name指针，
//均在堆区创建

struct person
{
	char* name;
	int age;
};

struct person**  allocatespace()
{
	struct person **Parray=malloc(sizeof(struct person*) * 3);
	for (int i = 0; i < 3; i++)
	{
		//给每个结构体开辟内存
		Parray[i]=malloc(sizeof(struct person));
		//给每个结构体姓名开辟内存
		Parray[i]->name=malloc(sizeof(char)*64);
		sprintf(Parray[i]->name, "name_%d", i + 1);//格式化的内容，格式化的字符串
		Parray[i]->age = i + 18;
	}
	return Parray;
}

void printfparray(struct person** Parray, int len)//struct person* Parray[]
{
	for (int i = 0; i < len; i++)
	{
		printf("姓名：%s，年龄：%d\n", Parray[i]->name, Parray[i]->age);
	}
}

//释放
void freespace(struct person** Parray,int len)
{
	for (int i = 0; i < len; i++)
	{
		if (Parray[i]->name != NULL)
		{
			printf("Parray[%d]->name被释放了\n", i );
			free(Parray[i]->name);//先释放每个结构体中的char*name
			Parray[i]->name = NULL;
		}

		//释放结构体
		printf("Parray[%d]被释放了\n", i);
		free(Parray[i]);
		Parray[i] = NULL;
	}
	//释放数组
	printf("Parray被释放了\n");
	free(Parray);
	Parray = NULL;
}

void test01()
{
	struct person** Parray = NULL;// malloc(sizeof(struct person*) * 3);
	Parray = allocatespace();
	printfparray(Parray,3);
	//释放
	freespace(Parray,3);
	Parray = NULL;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
*/