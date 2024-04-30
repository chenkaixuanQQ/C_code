#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//Enter a nuumber ,and the program will find how times number 9 appear from 1 to the number



//int main()
//{
//	//Enter a number.
//	int num = 0;
//	printf("Please enter a number:");
//	scanf("%d", &num);
//	
//	//Calculate
//	int i = 8;
//	int t = 8;
//	int count = 0;      //To count the appear of number 9
//
//	for (i = 8; i <= num; i++)
//	{
//		t = i;
//		
//		while (t >= 9)
//		{
//			if (t % 10 == 9)
//				count++;
//			t /= 10;
//		}
//	}
//	
//	//Output
//	printf("Number 9 has a total of %d words\n", count);
//
//	return 0;
//}

////Obtain the factorial of n
//
//int calculate_factorial(int x)
//{
//	if (1 == x)
//		return 1;
//
//	else
//		return x * calculate_factorial(x - 1);
//}
//
//int main()
//{
//	//Enter n
//	int n = 0;
//	printf("Please enter number n to obtain it's factorial:");
//	scanf("%d", & n);
//	
//	//Use a function to tackle the problem.
//	int answer = calculate_factorial(n);
//
//	printf("%d is the factorial of n\n", answer);
//
//	return 0;
//}



//int main()
//{
//	unsigned int n = -10;
//	printf("%u\n", n);
//
//	return 0;
//}

/*
int main()
{
	int fib1 = 1;
	int fib2 = 1;
	int fibn = fib1 + fib2;
	int n = 0;
	int i = 0;
	printf("Please enter a number:");
	scanf("%d", &n);

	if (n <= 2)
	{
		fibn = 1;
		goto destination;
	}

	for(i = 1;i <= n - 2;i++)
	{
		fibn = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibn;
	}
	destination:

	printf("%d\n", fibn);

	return 0;
}*/

////（1）一只青蛙一次可以跳上 1 级台阶，也可以跳上2 级。求该青蛙跳上一个n 级的台阶总共有多少种跳法
//
//int method(int n)
//{
//
//
//
//
//}
//
//
//int main()
//{
//	//Enter a number
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = method(n);
//	printf("There are %d methods in total.\n", ret);
//	return 0;
//}





