#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <math.h>
using namespace std;




//int main()
//{
//	again:
//	printf("�������뷴ת�������:");
//	int	N = 0;
//	scanf("%d", &N);
//
//	if (N < 0)
//	{
//		printf("����������������룺");
//		goto again;
//	}
//
//	for (; N > 0; N /= 10)
//	{
//		printf("%d", N % 10);
//	}
//	return 0;
//}

//
////����ͬ����
//int main()
//{
//	int N = 0;//��������
//	int M = 0;//������
//	int x = 0;//��ʾ��������
//	int y = 0;//��ʾ�õ�����
//
//	again:
//	scanf("%d %d", &N, &M);
//
//	if (M % 2 != 0)
//	{
//		printf("���������ȫ���������룺");
//		goto again;
//	}
//
//	y = (M - 2 * N) / 2;
//	x = N - y;
//
//	if (x * y < 0)
//	{
//		printf("û�д�");
//		return 0;
//	}
//
//	printf("��������Ϊ�� %d���õ�����Ϊ�� %d", x, y);
//
//	return 0;
//}



//
//int main()
//{
//	//printf("%lf\n", sqrt(-10.0));
//
//	//printf("%lf\n", 0.0 / 0.0);
//
//
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d%d", &a, &b);
//	//printf("%d %d", a, b);
//
//	//printf("%%d");
//
//
//	double a = 0;
//	double b = 0;
//	double c = 0;
//
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	printf("%.3lf\n", (a + b + c) / 3);
//
//	return 0;
//}

#define arr 10 + 3

int main()
{
	//printf("%s\n", __FILE__);
	//printf("%s\n", __DATE__);
	//printf("%s\n", __TIME__);

	printf("%d\n", arr * 3);


	return 0;
}
