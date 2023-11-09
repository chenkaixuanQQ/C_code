#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Method 1

//int main()
//{
//	int num = 0;
//	printf("Please enter a number:>");
//	scanf("%d", &num);
//
//	int i = 0;
//	int j = 0;
//	int result = 0;
//
//	for (i = 1; i <= num; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;//factorial
//		}
//
//		result += ret;
//	}
//
//
//	return 0;
//}


//Optimize:

int main()
{
	int num = 0;
	printf("Please enter a number:>");
	scanf("%d", &num);

	int ret = 1;
	int i = 0;
	int j = 0;

	for (i = 1; i <= num; i++)
	{
		ret *= i;
		j += ret;
	}
	printf("The sum of factorial form 1 to %d is %d.", num, j);


	return 0;
}