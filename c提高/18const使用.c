/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

struct person
{
	char name[64];
	int age;
	int id;
	double score;
};

//void printfperson(struct person p)//形参拷贝一份副本p1的副本p，浪费空间
//{
//	p.age = 20;//p1年龄未修改
//	printf("姓名:%s,年龄:%d,id:%d,成绩:%f\n", p.name, p.age, p.id, p.score);
//}
void printfperson(const struct person *p)
{
	//(*p).age = 20;//将形参struct person *p加上const，防止误修改
	printf("姓名:%s,年龄:%d,id:%d,成绩:%f\n", p->name, p->age, p->id, p->score);
}

void test01()
{
	struct person p1 = { "zd",19,317,99 };
	printfperson(&p1);//
	printf("姓名:%s,年龄:%d,id:%d,成绩:%f\n", p1.name, p1.age, p1.id, p1.score);
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
*/