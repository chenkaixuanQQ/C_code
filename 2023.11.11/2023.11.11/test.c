#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = printf("123456\n");
//	printf("%d ", i);
//	return 0;
//}


//Calculate the nth item in Fibonacci sequence:


//int main()
//{
//	long a1 = 1;
//	long a2 = 1;
//	long an = 0;
//	int n = 0;
//	int count = 0;
//	again:
//	printf("Please enter a number:>");
//	scanf("%d", &n);
//	
//	if (n <= 0)
//	{
//		printf("please enter a number that more than 0!\n");
//		goto again;
//	}
//	else if (n > 0 && n <= 2)
//	{
//		an = 1;
//		goto ret;
//	}
//
//	int i = 0;
//	for (i = 3; i <= n; i++)
//	{
//		an = a1 + a2;
//		a1 = a2;
//		a2 = an;
//		count++;
//	}
//	ret:
//	printf("%d \n", count);
//	printf("The %dth item in Fibonacci sequence is %ld", n, an);
//	return 0;
//}


int main()
{
	//int sz = sizeof(long long);
	//printf("%d ", sz);
	
	printf("%d ", 0x123);
	printf("%d ", 0b111010101);

	return 0;
}