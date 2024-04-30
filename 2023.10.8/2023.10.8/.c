#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int love(int arr[])
//{
//	return arr[2] = 4;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	love(arr);
//	printf("%d\n", arr[2]);
//
//
//	return 0;
//}

//void output(int n)
//{
//	if (n > 10)
//		printf("%d");
//
//}


//int main()
//{
//	//开启关机程序，并提醒用户电脑即将关机
//	system("shutdown  -s -t 60");
//again:
//	printf("Your computer will power dowm after 60s,please enter '凯旋是大帅哥' to end up the programme.\n");
//
//	//诱导其输入相应内容
//	char password[20] = { 0 };
//	scanf("%s", password);
//	//判断目标输入是否正确
//
//	if (strcmp(password, "凯旋是大帅哥") == 0)
//	{
//		system("shutdown -a");
//		printf("Good luck!\n");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//


//int main()
//{
//	//Enter a number
//	int n = 0;
//	printf("Please enter a number:");
//	scanf("%d", &n);
//	output(n);
//
//	return 0;
//}
//
//



int main()
{
	char i = 0;
	scanf("%c", &i);
	switch (i)
	{
	case 109:
			printf("1\n");
	default:
		printf("0\n");
	case 97:
		printf("2\n");


	}


	return 0;
}































