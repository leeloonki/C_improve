/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.静态变量
static int a = 10;//只初始化一次，编译阶段分配内存，只能在当前文件使用
//补充c程序经预处理 编译 链接 最后生成可执行文件exe；

void test01()
{
	static int b = 20;//局部静态变量，只在当前作用域使用
	//a b生命周期相同作用域不同
}

//2.全局变量
int g_a = 100;//c语言中全局变量前隐藏了关键字extern，外部连接属性
void test02()
{
	extern int g_b;//声明
	printf("g_b=%d\n", g_b);
}

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
*/