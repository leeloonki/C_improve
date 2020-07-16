/*
#pragma once
#include"34linklist.h"

//初始化链表(创建头节点)
struct LinkNode* init_LinkList()
{
	struct LinkNode* Pheader = malloc(sizeof(struct LinkNode));
	
	if (Pheader == NULL)//
	{
		return NULL;
	}

	//头节点不维护数据域，只维护指针域
	Pheader->NEXT = NULL;//头节点初始化指针域为空即可

	//创建尾节点，利于后期添加数据
	struct LinkNode* pTail = Pheader;//头节点和单独的尾节点均操纵堆区头节点结构体


	int val = -1;
	while (1)
	{
		printf("请插入数据 ,-1代表输入结束：\n");
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}

		//创建新节点
		struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->NEXT = NULL;

		//建立关系
		pTail->NEXT = newNode;//将下一个开辟的节点地址交给尾部指针域维护
		//更新新的尾节点
		pTail = newNode;
	}
	return Pheader;
}

//遍历链表
void foreach_LinkList(struct LinkNode* pheader)
{
	if (pheader == NULL)
	{
		return;
	}

	struct LinkNode* pcurrent = pheader->NEXT;//pcurrent指向第一个有真实数据的节点
	int i = 1;
	while (pcurrent != NULL)
	{
		printf("第%d个节点为:%d\n", i++, pcurrent->num);
		pcurrent = pcurrent->NEXT;
	}
}

//插入
void insert_LinkList(struct LinkNode* pheader, int oldVal, int newVal)
{
	if (pheader == NULL)
	{
		return;
	}
	
	//创建两个辅助指针
	struct LinkNode* pPrew = pheader;
	struct LinkNode* pCurrent = pheader->NEXT;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == oldVal)//找到插入的位置
		{
			break;
		}

		//没找到，辅助指针后移
		pPrew = pCurrent;
		pCurrent = pCurrent->NEXT;
	}

	//建立关系

	//创建新节点
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->num = newVal;
	newNode->NEXT = NULL;

	//建立关系，更新指针指向
	newNode->NEXT = pCurrent;
	pPrew->NEXT = newNode;
}

//删除节点
void delete_LinkList(struct LinkNode* pHeader, int val)
{
	if (pHeader==NULL)
	{
		return;
	}

	//创建两个辅助指针
	struct LinkNode* pPrew = pHeader;
	struct LinkNode* pCurrent = pHeader->NEXT;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == val)
		{
			break;
		}
		pPrew= pCurrent;
		pCurrent = pCurrent->NEXT;
	}

	//无效数据直接返回
	if (pCurrent == NULL)
	{
		return;
	}

	//更改指针指向
	pPrew->NEXT = pCurrent->NEXT;

	//删除节点
	free(pCurrent);
	pCurrent = NULL;
}

//清空链表
void clear_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//创建临时指针
	struct LinkNode* pCurrent = pHeader->NEXT;
	while (pCurrent != NULL)
	{
		//先保存要删除结点的后面的节点
		struct LinkNode* nextnode = pCurrent->NEXT;
		free(pCurrent);
		pCurrent = nextnode;
	}
	pHeader->NEXT = NULL;
}

//销毁链表
void destory_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}
	//先清空链表
	clear_LinkList(pHeader);
	//再释放头节点
	free(pHeader);
	pHeader = NULL;
}

//反转链表
void reverse_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}
	struct LinkNode* pPrew = NULL;
	struct LinkNode* pCurrent = pHeader->NEXT;
	struct LinkNode* pNext = NULL;

	while (pCurrent != NULL)
	{
		pNext = pCurrent->NEXT;
		//反转链表需要三个辅助指针变量实现链表反转
		pCurrent->NEXT = pPrew;
		pPrew= pCurrent;
		pCurrent= pNext;
	}

	//更新头节点
	pHeader->NEXT = pPrew;
}

//获取链表长度
int size_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return -1;
	}

	struct LinkNode* Pcurrent = pHeader->NEXT;

	int count = 0;

	while (Pcurrent != NULL)
	{
		count++;
		Pcurrent = Pcurrent->NEXT;
	}

	return count;
}*/