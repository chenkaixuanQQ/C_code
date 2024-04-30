#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//User enter a number , and the program will print the prime from 1 to tne number:


void is_prime(int n)
{
	int i = 1;
	int j = 1;

	for (i = 1; i <= n; i += 2)//Generate the number form 1 to num:
	{
		for (j = 2;; j++)//Judge:
		{
			if (0 == i % j)
			{
				break;
			}
			if (j >= sqrt(i))
			{
				printf("%d ", i);
				break;
			}
		}

	}
}

int main()
{
	//Enter a number:
	int num = 0;
	printf("Please enter a number:>");
	scanf("%d", &num);

	is_prime(num);

	return 0;
}


