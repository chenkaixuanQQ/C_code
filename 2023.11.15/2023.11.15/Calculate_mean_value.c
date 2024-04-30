#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Calculate the mean of ten numbers user have entered.
int main()
{
	//Enter ten numbers:
	int num[10] = { 0 };
	int i = 0;
	printf("Please enter ten numbers:>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	//Calculate the mean:
	double ret = 0;
	for (i = 0; i < 10; i++)
	{
		ret += num[i];
	}
	printf("The mean of the ten numbers is %lf", ret / 10.0);

	return 0;
}









