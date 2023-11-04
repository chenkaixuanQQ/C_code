#define   _CRT_SECURE_NO_WARNINGS  1
#include "game.h"

//简易版扫雷游戏：

int main()
{
	//打印菜单：
	menu();

	//输入1,进入游戏，输入0退出游戏：
	int input =  0;

	srand((unsigned int)time(NULL));

	do
	{
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("非法输入，请再次输入0或1：\n");
			break;
		}

	} while (input);

	//退出循环，则视为游戏结束：
	printf("游戏结束！\n");


	return 0;
}










