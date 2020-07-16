/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<time.h>

#include"42面向接口编程接口实现.h"

//初始化游戏功能
//void** gameHandle 主调函数不分配内存被调分配用二级指针接收
typedef void(*INIT_GAME)(void** gameHandle, char* name);
//游戏战斗 返回游戏战斗结果，1代表胜利 0代表失败
typedef int(*FIGHT_GAME)(void* gameHandle, int gameLevel);
//查看玩家信息
typedef void(*PRINT_GAME)(void* gameHandle);
//离开游戏
typedef void(*CLOSE_GAME)(void* gameHandle);

void playGAme(INIT_GAME init, FIGHT_GAME fight, PRINT_GAME printgame, CLOSE_GAME closegame)
{
	//初始化游戏
	void* gameHandle = NULL;
	printf("请输入玩家姓名\n");
	char name[64];
	scanf("%s", name);
	init(&gameHandle, name);

	//游戏战斗
	int level = -1;
	while (1)
	{
		getchar();//取走缓冲区换行符
		system("cls");//清屏

		printf("请输入游戏难度:\n");
		printf("1 普通:\n");
		printf("2 中等:\n");
		printf("3 困难:\n");
		int level = -1;

		scanf("%d", &level);
		
		//getchar();

		int ret = fight(gameHandle, level);
		if (ret == 0)
		{
			printf("失败\n");
			printgame(gameHandle);
			break;
		}
		else
		{
			printf("成功\n");
			getchar();
			printgame(gameHandle);
		}
		
	}
	
	//离开游戏
	closegame(gameHandle);
}

int main()
{
	srand((unsigned int)time(NULL));//随机数种子

	playGAme(INIT_GAME_COMPANY, FIGHT_GAME_COMPANY, PRINT_GAME_COMPANY, CLOSE_GAME_COMPANY);

	system("pause");
	return EXIT_SUCCESS;
}
*/