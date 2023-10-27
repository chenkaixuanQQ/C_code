#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	//开启关机程序，并提醒用户电脑即将关机
	system("shutdown  -s -t 60");
again:
	printf("你的电脑将在60s后关机，请输入：我是猪，来终止程序。\n");

	//诱导其输入相应内容
	char password[20] = { 0 };
	scanf("%s", password);
	//判断目标输入是否正确

	if (strcmp(password,"我是猪") == 0)
	{
		system("shutdown -a");
		printf("真乖。\n");
	}
	else
	{
		goto again;
	}
	return 0;
}



