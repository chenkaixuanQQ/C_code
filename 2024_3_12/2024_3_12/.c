#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//int main()
//{
//	int arr[] = { 1,2,3 };
//	//int* ptr = arr;
//	int a = 10;
//	int* ptr = &a;
//
//	printf("%p\n", ptr);
//
//	int* pa = realloc(ptr, 3 * sizeof(int));
//	printf("%p\n", ptr);
//	printf("%p\n", pa);
//
//	return 0;
//}



int main()
{
	int* ptr = (int*)malloc(10 * sizeof(int));
	printf("%p\n", ptr);

	int* pa = (int*)realloc(ptr, 20 * sizeof(int));


	return 0;
}




