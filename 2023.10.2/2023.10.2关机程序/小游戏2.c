#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	//�����ػ����򣬲������û����Լ����ػ�
	system("shutdown  -s -t 60");
again:
	printf("��ĵ��Խ���60s��ػ��������룺����������ֹ����\n");

	//�յ���������Ӧ����
	char password[20] = { 0 };
	scanf("%s", password);
	//�ж�Ŀ�������Ƿ���ȷ

	if (strcmp(password,"������") == 0)
	{
		system("shutdown -a");
		printf("��ԡ�\n");
	}
	else
	{
		goto again;
	}
	return 0;
}



