#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Determine whether a number is the power of 2:>

int main()
{
	int num = 0;
	printf("Please enter the number you want to check:>");
	scanf("%d", &num);
	int ret = num;

	while (num)
	{
		if (1 == num % 2 && 1 != num)
		{
			printf("%d isn't the power of 2!", num);
			break;
		}
		num /= 2;
	}

	if (0 == num)
		printf("%d is the power of 2!", ret);
	return 0;
}














