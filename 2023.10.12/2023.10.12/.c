#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

////int main()
////{
////	int a, b = 10;
////	printf("%d %d\n", a, b);
// //		printf("%d\n", strlen("开！"));
/////  printf("\101");
////	return 0;
////}




//int main()
//{
//
//
//
//
//
//	return 0;
//}



int main()
{
	//开启关机程序，并提醒用户电脑即将关机
	system("shutdown  -s -t 60");
again:
	printf("你的电脑将在一分钟后关机，请输入 '凯旋是大帅哥' 来阻止本次关机！\n");

	//诱导其输入相应内容
	char password[20] = { 0 };
	scanf("%s", password);
	//判断目标输入是否正确

	if (strcmp(password, "凯旋是大帅哥") == 0)
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
























