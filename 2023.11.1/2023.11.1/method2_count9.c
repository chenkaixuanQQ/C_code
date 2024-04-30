#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Count_nine(int n);

int main()
{
	//Enter a random number N;
	int N = 0;
	printf("Please enter a number:>");
	scanf("%d", &N);

	//Count:
	int ret = Count_nine(N);

	//Output
	printf("The number 9 appears %d times in total!");


	return 0;
}


int Count_nine(int n)
{
	int i = 9;
	int t = 0;
	int cout = 0;
	for (i = 9; i <= n; i++)
	{
		if (9 == i % 10)
			cout++;
		t = i;
		for (t = i; t;)
		{





		}
	}




}


























