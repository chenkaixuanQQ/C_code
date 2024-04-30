#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[3][4] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	printf("%zd\n", sizeof(arr[0]));
	printf("%p\n", arr[0]);
	printf("%p\n", arr[0] + 1);
	//printf("%zd\n", strlen('j'));

	char ch[] = { "abcd" };
	printf("%zd\n", strlen(ch));
	printf("%zd\n", sizeof("1234"));
	printf("%zd\n", sizeof("1234\0"));

	int a = 10;
	int* p = &a;
	printf("%d\n", p[0]);

	int arr2[10] = { 0 };
	printf("%zd", sizeof(&arr2));

	return 0;
}


