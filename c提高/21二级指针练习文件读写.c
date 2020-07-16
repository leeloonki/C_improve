/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int getfilelines(FILE* file)//FILE是一个结构体
{
	if (file == NULL)
	{
		return -1;
	}

	int lens=0;
	char buf[1024];//读取数据存buf
	while (fgets(buf, 1024, file) != NULL)
	{
		//printf("%s", buf);
		lens++;
	}

	//将文件光标置于文件首
	fseek(file, 0, SEEK_SET);
	return lens;
}

//参数一文件指针，参数二有效行数，参数三 堆区数组
void readfiledata(FILE* file, int len, char** pp)
{
	if (file == NULL)
	{
		return;
	}
	if (len<=0)
	{
		return;
	}
	if (pp == NULL)
	{
		return;
	}
	char buf[1024];//读取数据存buf
	int index = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		//buf每行就是存放文件每行数据
		int currentlinelen = strlen(buf) + 1;//文件每一行长度
		char* currentP = malloc(sizeof(char)*currentlinelen);
		//将每行数据拷贝堆区
		strcpy(currentP,buf);
		pp[index++] = currentP;

		//清空缓冲区
		memset(buf, 0, 1024);
	}

}

void showfiledata(char** p,int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("第%d行的数据为%s\n", i + 1, p[i]);
	}
}

void freespace(char **p,int len)
{
	for (int i = 0; i < len; i++)//释放小的
	{
		if (p[i] != NULL)
		{
			free(p[i]);
			p[i] = NULL;
		}
	}
	free(p);//释放大的
	p = NULL;
}

void test01()
{
	FILE* file = fopen("./21test.txt", "r");
	if (file == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	int len =getfilelines(file);
	printf("文件的有效行数为: %d\n", len);
	char**p=malloc(sizeof(char*) * len);

	//将文件中的数据读取后放到p中
	readfiledata(file,len,p);

	//打印数据
	showfiledata(p, len);

	//释放数据
	freespace(p,len);

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
*/