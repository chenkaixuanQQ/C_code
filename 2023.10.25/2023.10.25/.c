#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Determine whether three numbers can form a triangle,and output its type


//int main()
//{
//	//1.Enter three numbers:
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("Please enter three numbers:");
//	scanf("%d %d %d", &a, &b, &c);
//
//	//2.Determine whether them can form a triangle
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		//Dtermine it's type.
//
//		if (a == b && a == c)
//			printf("This is a isosceles triangle.");
//		else if (a == b || a == c || b == c)
//			printf("This is a equilateral triangle.");
//		else
//			printf("This is a normal triangle.");
//	}
//	else
//		printf("The three numbers cannot form a triangle.");
//	return 0;
//}

//Output a multiplication table of n times n:

//int main()
//{
//	//Enter a number:
//	int n = 0;
//	printf("Please enter a number,and we will output a multiplication table of n times n:>\n");
//	scanf("%d", &n);
//
//	//Generate the table:
//	int i = 1;
//	int t = 1;
//	for (i = 1; i <= n; i++)
//	{
//		for ( t = 1; t <= i; t++)
//		{
//			printf("%d ", i * t);
//		}
//
//		//Change the line every times
//		printf("\n");
//
//	}
//
//	return 0;
//}


//Find the maximum value in ten integers:


//int main()
//{
//	//Enter ten number:
//	int arr[11] = { 0 };
//	printf("Please enter ten numbers that you you to sort:>");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//Sort them:
//	int t = 0;
//	int x = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (t = i + 1; t < 10; t++)
//		{
//			if (arr[i] < arr[t])
//			{
//
//				//Sort by swapping order:
//
//				x = arr[i];
//				arr[i] = arr[t];
//				arr[t] = x;
//			}
//		}
//	}
//
//	//Output the order:
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


int main()
{
	int arr[2] = { 0 };
	printf("%p   %p", arr, &arr[1]);

	return 0;
}














