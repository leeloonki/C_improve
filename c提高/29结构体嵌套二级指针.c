/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
//每名老师带四名学生
struct Teacher
{
	char* T_name;
	char** T_Students;
};


//被调函数来分批内存
void allocatespace(struct Teacher***teachers)
{
	struct Teacher**pArray=malloc(sizeof(struct Teacher*) * 3);
	
	for (int i = 0; i < 3; i++)
	{
		//给每个老师分配空间
		pArray[i]=malloc(sizeof(struct Teacher));
		
		//给每个老师姓名分配空间
		pArray[i]->T_name = malloc(sizeof(char) * 64);
		sprintf(pArray[i]->T_name, "Teacher_%d", i + 1);
		
		//给老师带的学生开辟空间
		pArray[i]->T_Students = malloc(sizeof(char*) * 4);
		
		//给学生赋值
		for (int j = 0; j < 4; j++)
		{
			pArray[i]->T_Students[j] = malloc (sizeof(char)*64);
			sprintf(pArray[i]->T_Students[j], "%s_Student_%d", pArray[i]->T_name, j+1);
		}
	}

	*teachers = pArray;
}

showarray(struct Teacher** pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", pArray[i]->T_name);
		for (int j = 0; j < 4; j++)
		{
			printf("\t%s\n", pArray[i]->T_Students[j]);
		}
	}
}

void freespace(struct Teacher** pArray,int len)
{
	for (int i = 0; i < len; i++)
	{
		//先释放老师姓名
		if (pArray[i]->T_name != NULL)
		{
			free(pArray[i]->T_name);
			pArray[i]->T_name = NULL;

		}
		
		//释放学生姓名
		for (int j = 0; j < 4; j++)
		{
			if (pArray[i]->T_Students[j] != NULL)
			{
				free(pArray[i]->T_Students[j]);
				pArray[i]->T_Students[j] = NULL;
			}
		}
		
		//释放学生数组
		if (pArray[i]->T_Students != NULL)
		{
			free(pArray[i]->T_Students);
			pArray[i]->T_Students = NULL;
		}
		
		//释放老师结构体
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}
	
	//释放老师数组
	free(pArray);
	pArray = NULL;
}

void test01()
{
	struct Teacher** pArray=NULL;//主调函数不分配内存

	//1.分配内存
	allocatespace(&pArray);
	
	//2.打印数据
	showarray(pArray, 3);

	//释放内存
	freespace(pArray, 3);

	//freespace函数形参为同级指针，用于将pArray开辟的内存全部释放
	//但此时pArray仍指向堆区内存成为野指针，需置空
	pArray = NULL;
}

int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
*/