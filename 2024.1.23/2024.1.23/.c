#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a[5][5];
	int(*p)[4];
	p = a; // p = *a *(p + 4 + 2)
	printf("%p\n%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	int b = 3;
	int* pa = &b; //pa = &b, 

	return 0;
}

