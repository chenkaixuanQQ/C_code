#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int x = 10;
//	int y = 30;
//	int z = 1;
//	if (x <! y )
//		printf("yes!\n");
//
//
//	return 0;
//}


////Determine whether a year is a leap year.
//
//int main()
//{
//	//Enter:
//	int year = 0;
//	printf("Please enter which year do you want to judge:");
//	scanf("%d", &year);
//
//	//Judge:
//	if (0 == year % 400)
//		printf("%d is a leap year!\n", year);
//
//	else if (0 == year % 4)
//	{
//		if (0 == year % 100)
//			printf("%d isn't a leap year.\n", year);
//		else
//			printf("%d is a leap year!\n",year);
//	}
//
//	else
//		printf("%d isn't a leap year!\n", year);
//	return 0;
//}


////The remainder of a number divided by 3
//
//int main()
//{
//	//Enter a number:
//	int num = 0;
//	printf("Please enter the number:");
//	scanf("%d", &num);
//
//	//Judge
//	int i = num % 3;
//	printf("The remainder is %d\n", i);
//
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//
//	//switch (a)
//	//{
//	//case 5:
//	//	printf("haha\n");
//	//case 9:
//	//	printf("hehe\n");
//
//	//}
//
//
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	scanf("%f", &a);
//	printf("%d\n", a);
//
//
//	return 0;
//}


//任意输入四个数，然后从大到小输出
int main()
{
	int i = 0;
	//Enter 4 numbers
	int arr[] = { 0 };
	int n = 0;
	while (n < 4)
	{
		scanf("%d", &arr[n]);
		n++;
	}
	for(n = 0; n <= 4; n++)
	{
		if (arr[n] >= ((arr[0] > arr[1] ? arr[0] : arr[1]) > (arr[2] > arr[3] ? arr[2] : arr[3]) ? (arr[0] > arr[1] ? arr[0] : arr[1]) : (arr[2] > arr[3] ? arr[2] : arr[3])))
		{
			printf("%d ", arr[n]);
				arr[n] = 0;
				n = -1;
		}
		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3] && arr[3] == 0)
			break;
	}
	return 0;
}


