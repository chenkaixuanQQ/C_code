#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

////int main()
////{
////	int a, b = 10;
////	printf("%d %d\n", a, b);
// //		printf("%d\n", strlen("����"));
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
	//�����ػ����򣬲������û����Լ����ػ�
	system("shutdown  -s -t 60");
again:
	printf("��ĵ��Խ���һ���Ӻ�ػ��������� '�����Ǵ�˧��' ����ֹ���ιػ���\n");

	//�յ���������Ӧ����
	char password[20] = { 0 };
	scanf("%s", password);
	//�ж�Ŀ�������Ƿ���ȷ

	if (strcmp(password, "�����Ǵ�˧��") == 0)
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
























