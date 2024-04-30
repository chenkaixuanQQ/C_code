#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void swap(int arr[], int brr[])
{
	int crr[9] = { 0 };
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		crr[i] = arr[i];
		arr[i] = brr[i];
		brr[i] = crr[i];
	}

}


int main()
{
	//Create two array:
	int i = 0;
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int brr[9] = { 9,8,7,6,5,4,3,2,1 };
	printf("Before swap:>");
	for (i = 0; i < 9; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	for (i = 0; i < 9; i++)
	{
		printf("brr[%d] = %d\n", i, brr[i]);
	}
	swap(arr, brr);

	printf("After swap:>");
	for (i = 0; i < 9; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	for (i = 0; i < 9; i++)
	{
		printf("brr[%d] = %d\n", i, brr[i]);
	}
	return 0;
}


