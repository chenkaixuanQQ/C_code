#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	//int a = 0;
//	//scanf("%d", &a);
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(&arr) / sizeof(arr);
//	printf("%zd\n", sizeof(&arr));
//
//	test(arr, sizeof(&arr) / sizeof(arr));
//
//	return 0;
//}


//void test(int brr[], int* parr)
//{
//	for (; brr < parr; brr++)
//	{
//		printf("%d ", *brr);
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	test(arr, &arr + 1);
//
//	return 0;
//}


int main()
{
	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;
	//printf("%p\n", *ppa);
	//printf("%p\n", pa);
	//printf("%d\n", **ppa);
	//printf("%p\n", *pa);

	//char ch[10] = "asdfghjkl";

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%c ", ch[i]);
	//}

	//printf("%s", ch);

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//int i = 0;

	//for (i = 0; arr + i < &arr + 1; i++)
	//{
	//	printf("%d ", *(arr + i));
	//}

	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[] = { 2,3,4,5,6 };
	//int arr3[] = { 3,4,5,6,7 };

	//int* arr[] = { arr1,arr2,arr3 };

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *(*(arr + i) + j));
	//	}
	//	printf("\n");
	//}


	//char ch[] = "abcdef";
	//char* pch = "abcdef";
	////printf("%c\n", *pch);
	////printf("%s\n", *pch);
	//char* ppch = &ch;
	//ppch = (char*)"abcdef";
	////&ch++;
	//int arr[] = { 0 };
	////arr++;

	//printf("%p\n", "abcdef");
	//printf("%p\n", &"abcdef" + 1);
	//printf("%p\n", pch);
	//printf("%p\n", &ch);

	//printf("%p\n", "abcdef");
	//printf("%p\n", "a");
	//printf("%p\n", "bcdef");


	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (*parr)[10] = &arr;
	////int (*parr)[10] = {1,2,3,4,5,6};

	//printf("%p\n", *parr);
	//printf("%p\n", arr);
	//printf("%p\n", *parr + 1);
	//printf("%d\n", *(*parr));
	//printf("%d\n", **parr);

	//int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//
	//printf("%p\n", arr );
	//printf("%p\n", arr + 1);
	//printf("%p\n", arr[1]);
	//printf("%p\n", arr[0] + 1);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pa = arr;
	printf("%p\n", *(&arr));
	printf("%d\n", **(&arr));
	printf("%d\n", *pa);

	return 0;
}







