#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//void Swap(int* pa, int* pb)
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;	
//}
//
//void test(int* arr)
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	*arr = 0;
//	int i = 0;
//	printf("%d\n", sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	//int a = 15;
//	//int* pa = &a;
//
//	//printf("%d\n", a);
//
//	////assert(10 == a);
//	////assert(15 == a);
//	//assert(pa == NULL);
//
//	//printf("%d\n", a);
//
//	//int a = 10;
//	//int b = 20;
//
//	//Swap(&a, &b);
//	//printf("a = %d, b = %d\n", a, b);
//
//	//int a = -1;
//	//printf("%d", ~a);
//
//	//int a = 10;
//	//int* pa = &a;
//	//printf("%d\n", ~*pa);
//
//	//int arr[10] = { 0 };
//	//printf("arr = %p\n", &arr);
//	//printf("arr[0] = %p\n", &arr[0]);
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* parr = &arr;
//	//*parr = 0;
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	test(&arr);
//
//	return 0;
//}


//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);
//	}
//	printf("\nÖ¸Õë¾ÍÕâ£¿\n");
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%td", &arr - arr);
//
//	//test(arr, &arr - arr);
//
//	int* parr = &arr + 1;
//
//	ptrdiff_t diff = (&arr + 1) + 0 - arr;
//	
//	printf("%td\n", diff);
//
//	return 0;
//}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr = arr;

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", parr[i]);

	}

	return 0;
}



