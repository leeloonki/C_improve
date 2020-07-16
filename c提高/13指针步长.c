/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<stddef.h>//offsetof头文件
//指针步长意义
//1.指针变量+1跳跃字节数
void test01()
{
	char* p = NULL;
	printf("%d\n", p);
	printf("%d\n", p+1);
}

//2.解引用时取的字节数
void test02()
{
	char buf[1024] = { 0 };

	int a = 1000;
	memcpy(buf+2, &a, sizeof(int));//从第三个到六个,sizeof(int) a的大小

	char* p = buf;//通过p取到buf首地址
	printf("buf中的a=%d\n", *(int*)(p+2));
}

//3.自定义数据类型
struct person
{
	char a;//0~3
	int b;//4~7
	char buf[64];//8~71
	int d;//72~75
};

void test03()	
{
	struct person p1 = { 'a',19,"zd",20 };
	
	//计算结构体中属性偏移
	printf("p1.d的偏移量为：%d\n", offsetof(struct person, d));
	printf("p1.d为：%d\n", *(int*)((char*)&p1 + offsetof(struct person, d)));
}
int main()
{
	//test01();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
*/