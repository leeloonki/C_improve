/*
#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//节点声明
struct LinkNode
{
	int num;
	struct LinkNode* NEXT;
};

//初始化链表
struct LinkNode* init_LinkList();

//遍历链表
void foreach_LinkList(struct LinkNode*pheader);

//插入链表（在某一值a前插入另一个值b，如果有a不存在，b尾插）
void insert_LinkList(struct LinkNode* pheader, int oldVal, int newVal);

//删除链表
void delete_LinkList(struct LinkNode* pHeader, int val);

//清空链表
void clear_LinkList(struct LinkNode* pHeader);

//销毁链表
void destory_LinkList(struct LinkNode* pHeader);

//反转链表
void reverse_LinkList(struct LinkNode* pHeader);

//返回链表长度
int size_LinkList(struct LinkNode* pHeader);

*/