/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

typedef struct Person1
{
	char name[64];
	int age;//不要在定义结构体时赋初值
} myPerson1;//myPerson是与struct Person类型的别名

void test01()
{
	myPerson1 p = { "zd",19 };
}

struct Person2
{
	char name[64];
	int age;
} myPerson2;//此处的myperson是一个结构体变量

void test02()
{
	myPerson2.age = 20;
	struct Person2 p2= {"zd",19};
	//myPerson.name ="zd";//字符串不能用等号赋值
	strcpy(myPerson2.name, "zd");
	printf("%d,%s\n", myPerson2.age, myPerson2.name);
	printf("%d,%s\n", p2.age, p2.name);
}

//3.匿名结构体
struct
{
	char name[64];
	int age;
}myPerson3 = {"zz",20};

void test03()
{
	printf("%d,%s\n", myPerson3.age, myPerson3.name);
}


void test04()
{
	//在栈上创建结构体
	struct Person1 p1 = { "zd",19 };

	//堆区分配内存
	struct Person1*p2=malloc(sizeof(struct Person1));
	p2->age = 100;
	strcpy(p2->name, "zzz");
}

void printfarray(struct Person1 persons[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("姓名:%s,年龄:%d\n", persons[i].name, persons[i].age);
	}
}

void test05()
{
	//结构体变量数组
	//栈上创建
	struct Person1 persons[] =
	{
		{"aa",1},
		{"bb",2},
		{"cc",3}
	};
	int len = sizeof(persons) / sizeof(struct Person1);
	printfarray(persons, len);

	//堆区创建
	struct Person1* personarray = malloc(sizeof(struct Person1) * 4);
	//赋值
	for (int i = 0; i < 4; i++)
	{
		sprintf(personarray[i].name, "name_%d", i);//name_0,18
		personarray[i].age = i + 18;
	}
	printfarray(personarray, 4);
}

int main()
{
	test05();


	system("pause");
	return EXIT_SUCCESS;
}
*/