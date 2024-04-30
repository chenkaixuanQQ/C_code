#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Method 1:


//int main()
//{
//	int size = 0;
//	printf("Please enter a number to determine the size of the square:>");
//	scanf("%d", &size);
//
//	int i = 0;
//	int j = 0;
//
//	char square[100][100] = { 0 };
//
//	//Initialization:
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			square[i][j] = ' ';
//		}
//	}
//
//	//Making pattern:
//	for (i = 0; i < size; i++)
//	{
//		if (0 == i)
//		{
//			for (j = 0; j < size; j++)
//			{
//				square[i][j] = '*';
//			}
//		}
//		else if (i == size - 1)
//		{
//			for (j = 0; j < size; j++)
//			{
//				square[i][j] = '*';
//			}
//		}
//		square[i][0] = '*';
//		square[i][j - 1] = '*';
//	}
//
//	//Print:
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size; j++)
//		{
//			printf("%c", square[i][j]);
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//Method 2:

int main()
{
	char square[100][100] = { 0 };
	int size = 0;
	printf("Please enter a number to determine the size of the square:>");
	scanf("%d", &size);

	int i = 0;
	int j = 0;
	for (i = 0; i < size; i++)
	{
		if (0 == i)
		{
			for (j = 0; j < size; j++)
			{
				square[i][j] = '*';
				printf("%c ", square[i][j]);
			}
			printf("\n");
		}
		else if (i == size - 1)
		{
			for (j = 0; j < size; j++)
			{
				square[i][j] = '*';
				printf("%c ", square[i][j]);
			}
			printf("\n");

		}
		else
		{
			for (j = 0; j < size; j++)
			{
				if (0 == j)
				{
					square[i][j] = '*';
					printf("%c ", square[i][j]);
				}
				else if (j == size - 1)
				{
					square[i][j] = '*';
					printf("%c ", square[i][j]);
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}


	return 0;
}




