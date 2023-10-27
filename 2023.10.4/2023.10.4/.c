#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include"add.h"

//int main()
//{
//	char password[] = {0};
//
//	again:
//	printf("\nPlease enter the password:");
//	scanf("%s", password);
//
//	if (strcmp(password, "positive") == 0)
//	{
//		printf("\nChen love you!");
//	}
//
//	else
//	{
//		printf("\nPassword is 'I love you!'");
//		goto again;
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	printf("%d %p\n", *pa, pa);
//	putchar('a');
//	return 0;
//}
//






//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = Add(a,b);
//	printf("%d\n", sum);
//
//	return 0;
//}





//nXn乘法表

//int main()
//{
//	//Enter a number. 
//	int n = 1;
//	int i = 0;
//	int t = 0;
//	printf("Please enter a number:");
//	scanf("%d", &n);
//	for(t = 1;t <= n;t++)
//	{
//		for (i = 1; i <= t; i++)
//		{
//			int z = i * i;
//			if (i < t)
//				printf("%d×%d =%d    ", i, i, z);
//
//			if (i == t)
//				printf("%d×%d =%d    \n", i, i, z);
//		}
//		i = 1;
//	}
//
//	return 0;
//}

//输入一个数字，看看从8到该数字中一共出现多少个9
//每出现一次9让t++,最后输出t

//int main()
//{
//	int n = 0;
//	int i = 8;
//	int t = 0;
//	again:
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	if (i > 100)
//	{
//		printf("请输入1到100之间的数。");
//		goto again;
//	}
//	for (i = 9; i <= n; i += 10)
//	{
//		t++;
//	}
//	for (int m = 89; m < n; m++)
//	{
//		t++;
//	}
//	printf("有%d个数字9出现\n", t);
//
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 2)
//			sum =sum - 1.0/i;
//		else
//			sum = sum + 1.0/i;
//	}
//	printf("%f\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	double i = 1.0 / 3;
//	printf("%f\n", i);
//	return 0;
//}


//Enter ten unmber,and let the program find it's maximum.


int main()
{
	//Enter ten number
	int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0};
	int t = 1;

	for (int i = 0; i < 10; i++)
	{
		int z = 0;
		scanf("%d", &z);
		arr[i] = z;
	}
	//Find the maximum.
	for (int m = 0; m < 9; m++)
	{

		if (arr[m] < arr[m + 1])
		{
			int n = 0;
			n = arr[m];
			arr[m] = arr[m + 1];
			arr[m + 1] = n;
		}
		else if (8 == m)
		{
			m = 0;
			t++;
		}
		if (10 == t)
			break;
	}
		
	//Output it.
	printf("%d is the maximum in the ten number.\n", arr[0]);
	return 0;
}





















