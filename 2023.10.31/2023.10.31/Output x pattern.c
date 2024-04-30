#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	//Enter a number:
//
//	int num = 0;
//	printf("Please enter a number to get the 'x' pattern:>\n");
//	scanf("%d", &num);
//
//
//	//Input the number to generate the lines of code:
//
//	int i = 0;
//	int t = 0;
//	int j = num - 1;
//	for (i = 0; i < num; i++)
//	{
//		for (t = 0; t < num; t++)
//		{
//			if (i == t || j == t)
//				printf("*");
//
//			else
//				printf(" ");
//		}
//		printf("\n");
//		j--;
//
//	}
//
//	return 0;
//}


//Output square pattern:


int main()
{
	//Enter the length of the square:
	int len = 0;
	printf("Please enter the length of the square:>");
	scanf("%d", &len);

	//Generate the pattern:

	int i = 0;
	int t = 0;

	for (t = 0; t < len; t++)
	{
		if (t == 0 || t == len - 1)
		{
			for (i = 0; i < len; i++)//Generate the side:
			{
				printf("*");
			}
			printf("\n");
		}

		else if (t < len && t > 0)
		{

			for (i = 0; i < len; i++)
			{
				if (i == 0)
					printf("*");
				else if (i == len - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}

		else
		{
			for (i = 0; i < len; i++)//Generate the side:
			{
				printf("*");
			}
			printf("\n");

		}
	}


	return 0;
}
