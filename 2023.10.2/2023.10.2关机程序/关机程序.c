#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	//开启关机程序，并提醒用户电脑即将关机
	system("shutdown  -s -t 60");
again:
	printf("Your computer will power dowm after 60s,please enter '我是猪' to end up the programme.\n");

	//诱导其输入相应内容
	char password[20] = { 0 };
	scanf("%s", password);
	//判断目标输入是否正确

	if (strcmp(password,"我是猪") == 0)
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
