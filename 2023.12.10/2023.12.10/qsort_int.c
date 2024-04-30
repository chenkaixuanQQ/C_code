#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//Function: qsort:


int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void Print(int arr[], int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main()
{
	//Enter ten numbers:
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}

	//void qsort(void* base, 
	// size_t nitems, 
	// size_t size, 
	// int (*compar)(const void*, const void*))
	qsort(arr, sz, sizeof(arr[0]),cmp_int);

	Print(arr, sz);

	return 0;
}