/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//字符读写 fgetc() fputc()

void test01()
{
	//写文件
	FILE* f_write = fopen("./32test1.txt", "w");
	if (f_write == NULL)
	{
		return;
	}
	char buf[] = "hello world";

	for (int i = 0; i < strlen(buf); i++)
	{
		fputc(buf[i],f_write);
	}

	fclose(f_write);

	//读文件
	FILE* f_read = fopen("./32test1.txt", "r");
	if (f_read == NULL)
	{
		return;
	}
	char ch;
	while ((ch = fgetc(f_read))!=EOF)//EOF为文件尾
	{
		printf("%c", ch);
	}
	fclose(f_read);
	printf("\n");

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
*/