#define   _CRT_SECURE_NO_WARNINGS  1
#include "game.h"

//���װ�ɨ����Ϸ��

int main()
{
	//��ӡ�˵���
	menu();

	//����1,������Ϸ������0�˳���Ϸ��
	int input =  0;

	srand((unsigned int)time(NULL));

	do
	{
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("�Ƿ����룬���ٴ�����0��1��\n");
			break;
		}

	} while (input);

	//�˳�ѭ��������Ϊ��Ϸ������
	printf("��Ϸ������\n");


	return 0;
}










