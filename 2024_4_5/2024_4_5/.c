#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>







int main()
{
	int i = 0;
	int count = 0;
	int j = 0;

	for (i = 0; i <= 2020; i++)
	{
		j = i;
		for (j = i; j > 0; j /= 10)
		{
			if (j % 10 == 2)
			{
				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0;
}

























