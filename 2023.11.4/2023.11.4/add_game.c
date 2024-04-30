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

	printf("********ɨ����Ϸ********\n");

	int i = 1;

	//��ӡ��ʾ�С��У�
	for (i = 0; i <= ROW; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ���̣�
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

	printf("********ɨ����Ϸ********\n");

}

void Setmine(char arr[ROWS][COLS])
{
	int countmine = 10;

	while (countmine)
	{
	int i = rand() % ROW + 1;//���������
	int j = rand() % COL + 1;//���������

	//�۲�j��i�Ƿ�Ϊ�����
	//printf("i = %d ,j = %d", i, j);

	//������(10��)��

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
	//��ɶ�ʮ�����ף���Ϊ��Ϸʤ����
	int count = 20;
	do
	{
		again:
		printf("����������Ҫ�ų����к��У�");
		//Printboard(arr);

		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);

		if (x < 1 || x > 9 || y < 1 || y > 9)
		{

			printf("�Ƿ����룬��������ȷ���С��У�\n");
			goto again;
		}

		if (arr[x][y] == '1')
		{
			printf("��ը������Ϸ������\n");
			break;
		}
		else if (arr[x][y] == '0')
		{
			//����µ�λ�ò����ף�����ʾ��λ���ܱ��ж��ٸ���
			int num = stead(arr,x,y);
			char change = '0' + num;
			//printf("num = %d\n", num);
			show[x][y] = change;
		}

		count--;
		//ÿ������󶼴�ӡ���̣�
		Printboard(show);
	} while (count);
	if (0 == count)
		printf("��ϲ�㣬˳��ͨ����Ϸ������\n");
}



void game()
{
	//��һ�����������̣�
	char mine[ROWS][COLS];//��Ϊ�׵���ʾ
	char show[ROWS][COLS];//��Ϊ������ʾ

	//�ڶ�������ʼ�����̣�
	initboard(mine,'0');
	initboard(show,'*');

	//��ӡ���̣���ʱ����
	//Printboard(mine);
	Printboard(show);

	//�������������ף�������mine����������Ϊ'1'��
	Setmine(mine);
	//Printboard(mine);

	//���Ĳ������ף�
	Guess_mine(mine,show);
}



