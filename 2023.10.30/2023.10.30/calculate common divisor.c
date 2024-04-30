#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

//Calculate the maximum common divisor of two numbers:
//Method 1:¸üÏà¼õËðÊõ£¨Phase reduction surgery£©

int main()
{
	//Enter two numbers:

	int num1 = 0;
	int num2 = 0;
	printf("Please enter two numbers,and the program will calculate the maximum divisor:>");
	scanf("%d %d", &num1, &num2);

	//Use the greater number minus the other:
	int t = 0;

	if (num1 == num2)
	{
		printf("The maximum divisor is %d\n", num1);
	}

	else if (num1 > num2)
	{
		for (t = num1 - num2;t; )
		{
			if (t > num2)
			{
				num1 = t;
				t = num1 - num2;

			}
			else
			{
				num1 = num2;
				num2 = t;
				t = num1 - num2;
			}

			if (t)
				printf("The maximum divisor is %d\n", num1);
		}
	}

	else
	{
		t = num1;
		num1 = num2;
		num2 = t;

		for (t = num1 - num2;t;)
		{
			if (t > num2)
			{
				num1 = t;
				t = num1 - num2;

			}
			else
			{
				num1 = num2;
				num2 = t;
				t = num1 - num2;
			}

			if (t == 0)
				printf("The maximum divisor is %d\n", num1);
		}
	}






	return 0;
}

