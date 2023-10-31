#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

//Calculate the mean of ten numbers

int main()
{
	//Enter ten numbers:

	int arr[10] = { 0 };
	printf("Please enter ten numbers to get their mean:>");
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	for (i = 0; i <= sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	//Calculate:
	float t = 0;
	for (i = 0; i <= sz; i++)
	{
		t += arr[i];
	}

	t = t / (sz + 1);

	printf("The mean of the ten numbers is %f\n", t);

	return 0;
}











