#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void test(int x)
//{
//	printf("%d\n", x);
//}
//
//void test1(int x)
//{
//	printf("%d\n", x);
//}
//
//void test2(int x)
//{
//	printf("%d\n", x);
//}
//
//int main()
//{
//	void (* pt)(int) = test;
//
//	int a = 10;
//	
//	(*pt)(a);
//
//	void (*pt_f[5])(int) = { test,test1,test2 };
//
//	(*pt_f[2])(2);
//	(*pt_f[0])(0);
//
//	return 0;
//}

typedef int(*pt_f)(int, int);

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("************************\n");
	printf("*****    1.Add     *****\n");
	printf("*****    2.Sub     *****\n");
	printf("*****    3.Mul     *****\n");
	printf("*****    4.Div     *****\n");
	printf("*****    0.exit    *****\n");
	printf("************************\n");
}

int main()
{
	pt_f Cal[] = { NULL,Add,Sub,Mul,Div };
	
	int input = 0;
	again:
	menu();
	printf("��ѡ����Ҫִ�е�����������");
	scanf("%d", &input);

	if (input == 0)
	{
		printf("�˳���������\n");
	}

	else if (input > 4 || input < 0)
	{
		printf("����������������룺");
		goto again;
	}

	else
	{
		int x = 0;
		int y = 0;
		printf("��������Ҫִ�в�������������");
		scanf("%d %d", &x, &y);
		int ret = Cal[input](x , y);
		printf("�������ǣ�%d", ret);
	}

	return 0;
}