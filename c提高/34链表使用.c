/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include"34linklist.h"

void test01()
{
	//初始化链表
	struct LinkNode* pHeader = init_LinkList();

	//遍历链表
	foreach_LinkList(pHeader);

	
	//插入数据100 10 330 20 30 666
	insert_LinkList(pHeader, 10, 100);
	insert_LinkList(pHeader, 20, 330);
	insert_LinkList(pHeader, -1, 666);

	printf("插入数据后\n");
	//插入数据后遍历的结果为
	foreach_LinkList(pHeader);

	printf("删除数据后\n");
	//删除
	delete_LinkList(pHeader, 20);
	delete_LinkList(pHeader, 2000);
	foreach_LinkList(pHeader);

	//清空链表
	clear_LinkList(pHeader);
	printf("链表已清空\n");
	foreach_LinkList(pHeader);

	insert_LinkList(pHeader, 111, 111);//清空后还可使用，
	insert_LinkList(pHeader, 222, 222);
	foreach_LinkList(pHeader);

	destory_LinkList(pHeader);//销毁节点后不可再使用
}

void test02()
{
	struct LinkNode *pHeader= init_LinkList();

	//10 20 30   30 20 10
	reverse_LinkList(pHeader);

	printf("反转后结果为\n");
	
	foreach_LinkList(pHeader);

	int size = size_LinkList(pHeader);
	printf("链表长度为:%d\n", size);
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/