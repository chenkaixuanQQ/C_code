#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////Input 10 numbers and the program will output the mean of the 10 numbers:
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("Please enter ten numbers:\n");
//
//	//Enter ten numbers:
//	int i = 0;
//	for(i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	double mean = 0;
//	for (i = 0; i < 10; i++)
//	{
//		mean += arr[i];
//	}
//
//	mean /= 10.0;
//	printf("The mean of the 10 numbers is %lf\n", mean);
//
//
//	return 0;
//}


//int main()
//{
//	char ch1[] = "asdfg";
//	char ch2[] = { 'a','s','d','f','g' };
//
//	printf("%sz\n", sizeof(ch2));
//
//	return 0;
//}


//int main()
//{
//	
//	int c = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int a = 0;
//
//
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d ", arr[i]);
//
//		arr[i] = 0;
//	}
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	printf("%p\n", &a);
//	printf("%p\n", &c);
//
//	return 0;
//}


//Calculate the factorial of n:
//Method 1:

//int main()
//{
//	int n = 0;
//	printf("Please enter a number to get its factorial:>");
// 
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("The factorial of %d is %d!", n, ret);
//
//	return 0;
//}


////Method 2:
//
//int Fact(int x)
//{
//	if (0 == x)
//		return 1;
//	return x * Fact(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	printf("Please enter a number to get its factorial:>");
//	scanf("%d", &n);
//
//	long long ret = Fact(n);
//
//	printf("The factorial of %d is %lld!", n, ret);
//
//	return 0;
//}



//Enter a number,and the program will output its number one by one:

int One_by_one(int x)
{
	if (x > 0 && x < 10)
	{
		return x;
	}
	printf("%d ", One_by_one(x / 10));
	return x % 10;
}



int main()
{
	int n = 0;
	printf("Please enter a number:>");
	scanf("%d", &n);

	One_by_one(n);

	return 0;
}


