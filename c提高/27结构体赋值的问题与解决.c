/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

struct person
{
	char name[64];
	int age;
};

void test01()
{
	struct person p1 = { "Tom",8 };
	struct person p2 = { "Jerry",7 };

	printf("p1的姓名：%s,年龄:%d\n", p1.name, p1.age);//p1的姓名：Tom, 年龄:8
	printf("p2的姓名：%s,年龄:%d\n", p2.name, p2.age);//p1的姓名：Jerry, 年龄 : 7

	p1 = p2;//浅拷贝
	printf("p1的姓名：%s,年龄:%d\n", p1.name, p1.age);//p2的姓名：Jerry, 年龄 : 7
	printf("p2的姓名：%s,年龄:%d\n", p2.name, p2.age);//p2的姓名：Jerry, 年龄 : 7

}

struct Person2
{
	char* name;
	int age;
};

//深拷贝
void test02()
{
	struct Person2 p1;
	p1.age = 18;
	p1.name = malloc(sizeof(char) * 64);//
	strcpy(p1.name, "zzzzz");

	struct Person2 p2;
	p2.age =20;
	p2.name = malloc(sizeof(char) * 64);
	strcpy(p2.name, "ddddd");

	printf("p1的姓名：%s,年龄:%d\n", p1.name, p1.age);
	printf("p2的姓名：%s,年龄:%d\n", p2.name, p2.age);

	//p1 = p2;

	//手动赋值
	if (p1.name != NULL)
	{
		free(p1.name);
		p1.name = NULL;
	}
	p1.name = malloc(strlen(p2.name) + 1);//strlen不算'\0'
	strcpy(p1.name, p2.name);//将p2的name手动拷贝到p1

	p1.age = p2.age;

	//p1.name是char*类型，维护的是p1在堆区开辟的的地址，同理p2
	//浅拷贝，将p2 char*name存放的堆区地址拷贝到p1.name
	printf("p1的姓名：%s,年龄:%d\n", p1.name, p1.age);
	printf("p2的姓名：%s,年龄:%d\n", p2.name, p2.age);

	//if (p1.name != NULL)
	//{
	//	free(p1.name);//将p2在堆区开辟的内存释放
	//	p1.name = NULL;
	//}
	//if (p2.name != NULL)
	//{
	//	free(p2.name);//p2.name此时仍存放其开辟的内存地址，导致p2.name重复释放，p1.name内存泄漏
	//	p2.name = NULL;
	//}
	
	//解决方法，手动赋值，开辟一个新的内存地址存放p2的name，再将其地址交由p1维护
	//先释放p1.name

	if (p1.name != NULL)
	{
		free(p1.name);//将p2在堆区开辟的内存释放
		p1.name = NULL;
	}
	if (p2.name != NULL)
	{
		free(p2.name);//p2.name此时仍存放其开辟的内存地址，导致p2.name重复释放，p1.name内存泄漏
		p2.name = NULL;
	}

	//如果属性有指向堆区的内容，浅拷贝释放导致堆区重复释放，还有内存泄漏，
	//解决方案:深拷贝，手动赋值
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/