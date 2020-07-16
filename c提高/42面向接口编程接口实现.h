#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

struct Player
{
	char name[64];
	int level;//玩家等级
	int exp;//玩家经验
};

//初始化游戏功能
//void** gameHandle 主调函数不分配内存被调分配用二级指针接收
void INIT_GAME_COMPANY(void** gameHandle, char* name);
//游戏战斗 返回游戏战斗结果，1代表胜利 0代表失败
int FIGHT_GAME_COMPANY(void* gameHandle, int gameLevel);
//查看玩家信息
void PRINT_GAME_COMPANY(void* gameHandle);
//离开游戏
void CLOSE_GAME_COMPANY(void* gameHandle);

//判断游戏是否胜利
//参数1 胜率 参数2 难度等级 返回值是胜利后的经验 ，返回0代表失败
int isWin(int winRate, int diff);
