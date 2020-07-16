//库是可重复复用的代码，链接好的.o文件
//静态库对函数库的链接是在编译阶段完成，静态库在程序链接阶段被复制到程序中
//优点：移植方便 
//缺点:所有相关的目标文件与涉及到的函数库被连接一个可执行文件，浪费空间
//staticlib更新时，要将原有程序重新编译链接麻烦

//解决方案：将程序模块分隔开，形成独立的文件，在程序运行阶段进行连接
/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

#include"40mylib.h"

int main()
{
	int a = myAdd(10, 30);
	printf("%d\n", a);//不加mylib.h头文件也可执行

	system("pause");
	return EXIT_SUCCESS;
}
*/