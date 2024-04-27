#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//#define _DEBUG_
//
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef _DEBUG_
//		printf("%d ", arr[i]);
//#endif //_DEBUG_
//	}
//	return 0;
//}


//输入一些数，然后计算出这些数的最小值最大值和平均值：

#define _DEBUG_

int main()
{
//#ifdef _DEBUG_
//	freopen("data.in", "r", stdin);
//	freopen("data.out", "w", stdout);
//#endif


	int Max = 0;
	double Avg = 0;
	int Min = 0;

	int N = 0;
	printf("Please enter how many integer do you wanna the program: ");
	scanf("%d", &N);

	scanf("%d", &Min);
	Avg += Min;

	for (int j = 0; scanf("%d", &j);)
	{
		if (j > Max)
			Max = j;
		else if (j < Min)
			Min = j;
		Avg += j;
	}

	printf("The max number is %d\n", Max);
	printf("The min number is %d\n", Min);
	printf("The Average is %lf\n", Avg / N);

	return 0;
}


