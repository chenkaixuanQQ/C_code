#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//1.void qsort(void *base, 
//			   size_t nitems, 
//		       size_t size, 
//		       int (*compar)(const void *, const void*))

int cmp_num(const int* p1, const int* p2)
{
	return *p1 - *p2;

}

int cmp_num(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("Please enter ten numbers that you want to sort:");
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}

	qsort(arr, sz, sizeof(arr[0]), cmp_num);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

////Calculator:
//
//typedef int (*pf_t)(int, int);
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("************************\n");
//	printf("****  1.Add  2.Sub  ****\n");
//	printf("****  3.Mul  4.Div  ****\n");
//	printf("****      0.exit    ****\n");
//	printf("************************\n");
//	printf("\nPlease choose:");
//}
//
//int main()
//{
//	//Impelement a calculator:
//
//	agg:
//	again:
//
//	menu();
//
//	int chs = 0;
//	scanf("%d", &chs);
//
//	pf_t Cal[5] = { NULL, Add, Sub, Mul, Div };
//
//	if (0 == chs)
//	{
//		printf("Exit calculator!");
//		return 0;
//	}
//	else if (chs < 0 || chs > 4)
//	{
//		printf("Input error!Please enter again!");
//		goto again;
//	}
//
//	printf("Please enter two operands:");
//	
//	//Operand:
//	int o1 = 0;
//	int o2 = 0;
//	scanf("%d %d", &o1, &o2);
//	int ret = Cal[chs](o1, o2);
//
//	printf("The answer is : %d\n", ret);
//
//	printf("If you want to keep using the calculator please enter \"1\" !");
//	int i = 0;
//	scanf("%d", &i);
//	if (1 == i)
//	{
//		goto agg;
//	}
//
//	return 0;
//}







