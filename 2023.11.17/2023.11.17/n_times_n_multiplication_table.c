#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//Enter a number(n):
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)//row
	{
		for (j = 1; j <= i; j++)//column
		{
			printf("%d * %d = %d ", i, j, i * j);
		}

		printf("\n");
	}
	return 0;
}



