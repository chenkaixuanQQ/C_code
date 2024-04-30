#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//Create a function that can return the number of 1s in the binary of arguments

//Method 1:
int count_one(int n)
{
	int count = 0;

	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


////Method 2:
//int count_one(unsigned int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		if (n % 2)
//			count++;
//		n /= 2;
//
//	}
//
//	return count;
//}

int main()
{
	//Enter:
	int num = 0;
	printf("Please enter a number:>");
	scanf("%d", &num);

	//Return result:
	int ret = count_one(num);

	//Output the answer:
	printf("There are %d 1s in binary number of %d.", ret, num);

	return 0;
}