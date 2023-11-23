#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	/*arr = *a;*/
	int* pa = arr;
	printf("%d\n", *pa);
	printf("%d\n", *arr);
	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(char*));
	printf("%zd\n", sizeof(double*));


	return 0;
}





















