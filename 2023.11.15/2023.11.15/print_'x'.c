#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Determine the size of pattern 'x' based on the number the user has entered.

int main()
{
	//User enter a size:
	int size = 0;
	printf("Please enter a number to determine the size of 'x':>");
	scanf("%d", &size);

	//Print:

	char x_size[10][10] = {' '};
	int i = 0;
	int j = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			x_size[i][j] = ' ';
		}
	}

	j = size - 1;

	for (i = 0; i < size; i++,j--)
	{
		x_size[i][i] = 'x';
		x_size[i][j] = 'x';

	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%c", x_size[i][j]);
		}
		printf("\n");
	}

	return 0;
}





