#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("%d\n", sizeof(&a));

	int arr[10] = { 0 };
	int brr[10] = { 0 };

	int(*pa)[10] = &arr;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(*pa + i));
		printf("%p\n", *pa + i);
		printf("%p\n", arr + i);

	}

	int arr[10] = { 0 };

	int (*p)[10] = &arr;

	int* pa[10] = { arr };
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%p\n", *pa + i);
	}

	return 0;
}


