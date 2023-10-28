#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	//Enter a number:
	int num = 0;
	printf("Please enter a number:>");
	scanf("%d", &num);

	//Judge:
	int i = 0;
	int t = (int)sqrt(num);

	
		if (0 == num % 2)
			printf("%d isn't a prime number!", num);
		else
		{
			for (i = 3; i <= t; i += 2)
			{
				if (0 == num % i)
				{
					printf("%d isn't a prime number!", num);
					break;
				}
			}
		}

		if(i > t)
			printf("%d is a prime number!", num);

	return 0;
}




