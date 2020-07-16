/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int mystrstr(char*str,char*substr)
{
	int number=0;
	while (*str!='\0')
	{
		if (*str != *substr)//第一个字符不同时
		{
			str++;
			number++;
			continue;
		}

		//创建临时指针
		char* tempstr = str;
		char* tempsubstr = substr;

		while (*tempsubstr != '\0')
		{
			tempstr++;
			tempsubstr++;
			if (*tempstr != *tempsubstr)
			{
				//printf("匹配失败\n");
				str++;
				number++;
				break;
			}						
		}

		if (*tempsubstr == '\0')//匹配到\0位置即成功
		{
			//printf("匹配成功\n");
			return number;
		}
	}
	return -1;
}

void test01()
{
	char* str = "abcdefgdnf";

	int ret = mystrstr(str, "dnf");
	if (ret == -1)
	{
		printf("未找到\n");
	}
	else
	{
		printf("找到了，位置为:%d\n", ret);//7
	}
		

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
*/