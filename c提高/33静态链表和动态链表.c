/*
//数组缺陷1：静态空间一旦分配不可动态扩展，分配少不够用，分配多造成浪费
//缺陷2：对头部插入删除效率低（要移动数据）//链表可解决数组缺陷

//链表分类：
//方式1：静态链表（栈上）和动态链表（堆区）
//方式2：单向链表，双向链表   单向循环链表、双向循环链表

//链表由节点组成，节点分为指针域和数据域

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//1.静态链表

//节点声明
struct LinkNode
{
	int num;
	struct LinkNode* next;
};
void test01()
{
	//创建节点
	struct LinkNode node1 = { 10,NULL };
	struct LinkNode node2 = { 20,NULL };
	struct LinkNode node3 = { 30,NULL };
	struct LinkNode node4 = { 40,NULL };
	//建立关系
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	
	//遍历链表

	struct LinkNode* pcurrent = &node1;
	while (pcurrent!=NULL)
	{
		printf("%d\n", pcurrent->num);
		pcurrent = pcurrent->next;
	}
}

//2.动态链表
void test02()
{
	struct LinkNode *node1 = malloc(sizeof(struct LinkNode));
	struct LinkNode* node2 = malloc(sizeof(struct LinkNode));
	struct LinkNode* node3 = malloc(sizeof(struct LinkNode));
	struct LinkNode* node4 = malloc(sizeof(struct LinkNode));
	struct LinkNode* node5 = malloc(sizeof(struct LinkNode));

	node1->num = 10;
	node2->num = 20;
	node3->num = 30;
	node4->num = 40;
	node5->num = 50;

	//建立关系
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	//遍历
	struct LinkNode* pcurrent = node1;
	while (pcurrent != NULL)
	{
		printf("%d\n", pcurrent->num);
		pcurrent = pcurrent->next;
	}

	//释放节点
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
*/