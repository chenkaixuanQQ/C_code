#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	//�����ػ����򣬲������û����Լ����ػ�
	system("shutdown  -s -t 60");
again:
	printf("Your computer will power dowm after 60s,please enter '������' to end up the programme.\n");

	//�յ���������Ӧ����
	char password[20] = { 0 };
	scanf("%s", password);
	//�ж�Ŀ�������Ƿ���ȷ

	if (strcmp(password,"������") == 0)
	{
		system("shutdown -a");
		printf("Good luck!\n");
	}
	else
	{
		goto again;
	}
	return 0;
}
