#define   _CRT_SECURE_NO_WARNINGS  1
#include "game.h"


void menu()
{
	printf("*****************************\n");
	printf("*******   1.Play      *******\n");
	printf("*******   0.Exit      *******\n");
	printf("*****************************\n");
}


void initboard(char arr[ROWS][COLS] , char initial)
{
	int i = 0;
	for (i = 0; i <= ROWS; i++)
	{
		int j = 0;
		for (j = 0; j <= COLS; j++)
		{
			arr[i][j] = initial;
		}
	}
}

void Printboard(char arr[ROWS][COLS])
{

	printf("********扫雷游戏********\n");

	int i = 1;

	//打印提示行、列：
	for (i = 0; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印棋盘：
	for (i = 1; i <= ROW; i++)
	{
		int j = 1;
		printf("%d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	printf("********扫雷游戏********\n");

}

void Setmine(char arr[ROWS][COLS])
{
	int countmine = 10;

	while (countmine)
	{
	int i = rand() % ROW + 1;//生成随机行
	int j = rand() % COL + 1;//生成随机列

	//观察j、i是否为随机数
	//printf("i = %d ,j = %d", i, j);

	//设置雷(10个)：

		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			countmine--;
		}
	}


}


int stead(char arr[ROWS][COLS],int x,int y)
{
	return arr[x - 1][y - 1] + arr[x - 1][y] + arr[x - 1][y + 1] + arr[x][y - 1]  + arr[x][y + 1] + arr[x + 1][y - 1] + arr[x + 1][y] + arr[x + 1][y + 1] - 8*'0';
}



void Guess_mine(char arr[ROWS][COLS], char show[ROWS][COLS])
{
	//完成二十次排雷，即为游戏胜利！
	int count = 20;
	do
	{
		again:
		printf("请输入您想要排除的行和列：");
		//Printboard(arr);

		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		if (x < 1 || x > 9 || y < 1 || y > 9)
		{

			printf("非法输入，请输入正确的行、列！\n");
			goto again;
		}

		if (arr[x][y] == '1')
		{
			printf("被炸死，游戏结束！\n");
			break;
		}
		else if (arr[x][y] == '0')
		{
			//如果猜的位置不是雷，则显示该位置周边有多少个雷
			int num = stead(arr,x,y);
			char change = '0' + num;
			//printf("num = %d\n", num);
			show[x][y] = change;
		}

		count--;
		//每次输入后都打印棋盘：
		Printboard(show);
	} while (count);
	if (0 == count)
		printf("恭喜你，顺利通关游戏！！！\n");
}



void game()
{
	//第一步，制作棋盘：
	char mine[ROWS][COLS];//作为雷的显示
	char show[ROWS][COLS];//作为棋盘显示

	//第二步：初始化棋盘：
	initboard(mine,'0');
	initboard(show,'*');

	//打印棋盘，随时看：
	//Printboard(mine);
	Printboard(show);

	//第三步，设置雷，将雷在mine棋盘中设置为'1'：
	Setmine(mine);
	//Printboard(mine);

	//第四步，排雷：
	Guess_mine(mine,show);
}



