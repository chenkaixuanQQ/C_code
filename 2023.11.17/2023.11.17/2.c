#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//How many 1 does a number have in memory:>(Complement)

int main()
{
	int a = 0;
	printf("Please enter the number you want to check:>");
	scanf("%d", &a);

	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)//Store up to 32 bits in memory
	{
		if (((a >> i) & 1) == 1)
			count++;
	}

	printf("The number has %d 1s in memory", count);

	return 0;
}


//Method 2:(Source code)

int main()
{
	//Enter a number:
	int a = 0;
	printf("Please enter the number you want to check:>");
	scanf("%d", &a);

	int count = 0;

	//Simbol bit:>
	if (a < 0)
		count++;

	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		else if (a % 2 == -1)
		{
			count++;
		}
		a /= 2;
	}

	printf("The number has %d 1s in memory", count);
	
	return 0;
}



//Method 3:

int is_one_in_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


int main()
{
	int num = 0;
	printf("Please enter the number you want to check:>");
	scanf("%d", &num);

	int count = is_one_in_bit(num);
	printf("The number has %d 1s in memory", count);
	return 0;
}
