#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬
//�ú����ķ���ֵ��int��������int*����ȷ���ǣ�   ��
//C.int (*(*p)[10])(int *)

int test(int* x);

int main()
{
	//int a = 10;
	//int b = 20;
	//int* pa = &a;

	//int* (*(*p)[10]) = { &a,&b,&a,&a,&a,&a,&b,&a,&a,&a };

	//int (*(*p)[10])(int*) = { test };

	//int a = 10;

	//int *pa = &a;

	//int arr[10] = { 0 };

	//int* pa = &arr;

	//printf("%p\n", arr);
	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);

	int arr[10] = {0};
	int* pa[10] = { NULL };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		pa[i] = &arr[i];
	}

	printf("%p\n", arr);
	for (i = 0; i < sz; i++)
	{
		printf("%p\n", pa[i]);
	}




	return 0;
}

