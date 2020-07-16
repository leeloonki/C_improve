/*
#include"42面向接口编程接口实现.h"

//初始化游戏功能
//void** gameHandle 主调函数不分配内存被调分配用二级指针接收
void INIT_GAME_COMPANY(void** gameHandle, char* name)
{
	struct Player *player = malloc(sizeof(struct Player));

	if (player == NULL)
	{
		return;
	}

	strcpy(player->name, name);//玩家姓名赋值
	player->level = 0;
	player->exp = 0;

	*gameHandle = player;

}

//游戏战斗 返回游戏战斗结果，1代表胜利 0代表失败
int FIGHT_GAME_COMPANY(void* gameHandle, int gameLevel)
{
	struct Player* player = gameHandle;

	int addExp = 0;//累积的经验
	switch (gameLevel)
	{
	case 1:
		//内部提供一个函数，判断游戏是否胜利
		addExp = isWin(90, 1);
		break;
	case 2:
		addExp = isWin(50, 1);
		break;
	case 3:
		addExp = isWin(30, 1);
		break;
	default:
		break;
	}

	//将获取的经验给人物身上
	player->exp += addExp;
	player->level = player->exp / 10;
	if (addExp == 0)
	{
		return 0;
	}
	else
	{
		return 1;//战斗胜利
	}
}

//查看玩家信息
void PRINT_GAME_COMPANY(void* gameHandle)
{
	struct Player* player = gameHandle;
	printf("玩家<%s>------当前等级<%d>-----当前经验<%d>", player->name, player->level, player->exp);

}

//离开游戏
void CLOSE_GAME_COMPANY(void* gameHandle)
{
	if (gameHandle == NULL)
	{
		return;
	}
	free(gameHandle);
	gameHandle = NULL;
}

int isWin(int winRate, int diff)
{
	int random = rand() % 100 + 1;//1~100
	if (random <= winRate)
	{
		//代表胜利
		return 10 * diff;
	}
	else
	{
		//战斗失败
		return 0;
	}
}
*/