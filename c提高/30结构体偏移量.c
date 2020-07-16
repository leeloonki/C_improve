/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<stddef.h>

struct person
{
	char a;//0~3
	int b;//4~7
	float c;
};

void test01()
{
	struct person p1;
	struct person* p = &p1;

	//
	printf("c的偏移量为:%d\n", (int)&(p->c)-(int)&(p->a));
	printf("c的偏移量为:%d\n", offsetof(struct person, c));
}

//通过偏移量获取数据
void test02()
{
	struct person p1 = { 'F',19,4.30};

	//打印14的方法
	printf("p1.c = %f\n", p1.c);

	//(char*)&p1 + offsetof(struct person, c))获取内存首地址，char*（逐个加1）+c的偏移量得到c的内存地址，
	//c为double类型，从此处截取double类型长度，并解引用读出数据
	printf("p1.c = %f\n", *(float*)((char*)&p1 + offsetof(struct person, c)));
	printf("p1.c = %f\n", *(float*)((int*)&p1 + 2));//步长为4 +1即可
}

//结构体嵌套
struct person2
{
	char a;
	int b;
	struct person c;
};

void test03()
{
	struct person2 p = { 'F',19,'Y','20',4.30 };

	//打印4.30，利用偏移量
	
	int offset1 = offsetof(struct person2, c);//结构体person2 p中的struct person c
	int offset2 = offsetof(struct person, c);//结构体person 中的folat c

	printf("person中的c为：%f\n", *(float*)((char*)&p + offset1 + offset2));
	
	printf("person中的c为：%f\n", ((struct person*)((char*)&p +offset1))->c);
}

int main()
{
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/