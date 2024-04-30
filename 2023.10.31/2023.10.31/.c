#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//void add(int x)
//{
//	x;
//}
//
//
//int main()
//{
//	int a = -1;
//	add(a);
//	add(a);
//
//	return 0;
//}


//void Swap(int* pa)
//{
//	*pa = 10;
//
//}
//
//
//
//int main()
//{
//	int a = 0;
//	Swap(&a);
//
//	printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	for (a = 0; a < 10; a++, printf("%d\n", a),Sleep(100));
//	return 0;
//}

//test()
//{
//	printf("1234567\n");
//	printf("123455\n");
//}
//
//
//int main()
//{
//	int a = test();
//	printf("%d\n", a);
//	return 0;
//}


void Set_arr(int arr[])
{
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
}


void Print_arr(int arr[])
{
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr11[] = { 1, 2, 3, 4, 5 };
	Set_arr(arr11);//Turn the numbers in arr into -1:
	Print_arr(arr11);
	return 0;
}














