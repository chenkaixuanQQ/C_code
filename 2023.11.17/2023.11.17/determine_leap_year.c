#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//Enter a year:>
	int year = 0;
	again:
	printf("Please enter the year you want to judge:>");
	scanf("%d", &year);

	//Determine:
	if (year <= 0)
	{
		printf("Input error!Please enter again!\n ");
		goto again;
	}
	else if ((0 == year % 400) || (0 != year % 100 && 0 == year % 4))
	{
		printf("%d is a leap year!", year);
	}

	else
	{
		printf("Sorry %d isn't a leap year.\n",year);
	}
	return 0;
}




