/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

void test01()
{
	char* p = malloc(sizeof(char) * 64);
	char* pp = p;
	for (int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c  ", *pp);//a  b  c  d  e  f  g  h  i  j

		pp++;
		//p++;//申请的首地址指针偏移后不可再利用这个指针释放堆区内存，建立临时指针遍历，用p释放堆区
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
*/