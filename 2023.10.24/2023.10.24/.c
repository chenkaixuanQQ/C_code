#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("i = %d", i++);
//	} while (i <= 10);
//
//	return 0;
//}

////Confirm how many digits a integer is:
//
//int main()
//{
//	//Enter a number:
//	
//	int num = 0;
//	printf("Please enter a number:");
//	scanf("%d", &num);
//
//	//Calculate the digits:
//
//	int count = 0;
//	while (num)
//	{
//		num /= 10;
//		count++;
//	}
//
//	//Output the answer
//
//	printf("The integer is %d digits!", count);
//
//	return 0;
//}



////Determine whether a number is a prime:
//#include<math.h>
//
//int main()
//{
//	//Enter a number:
//	
//	int num = 0;
//	printf("Please enter the number you want to determine:");
//	scanf("%d", &num);
//
//	//Judge:
//
//	int i = 2;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (0 == num % i)
//		{
//			printf("%d isn't a prime!", num);
//			break;
//		}
//	}
//	if (i > sqrt(num))
//		printf("%d is a prime.", num);
//
//
//	return 0;
//}

#include<time.h>

#include<stdlib.h>
//Guess the random number:

void menu()
{
	printf("*********************************\n");
	printf("**********   1. play   **********\n");
	printf("**********   2. exit   **********\n");
	printf("*********************************\n");
}


void game()
{

	//Generate a random number:
	int r = rand() % 100 + 1;

	//Guess
	int num = 0;
	printf("Please guess it:");
	while (r != num)
	{
		scanf("%d", &num);
		if (num > r)
			printf("You guessed too big!Please try again!\n");
		else if (num < r)
			printf("You guessed too small!Please try again!\n");
	}
	
	if(num == r)
		printf("Congratulations! You guess it right!!!\n");
}


int main()
{
	//Set time seed:
	srand((unsigned int)time(NULL));


	int n = 0;
	do
	{
		//Generate a menu:

		menu();

		//Select

		printf("Please select:");
		scanf("%d", &n);

		//If choose 1,enter the game:

		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit the game\n");
			break;
		default:
			printf("Please enter 1 or 0.\n");
			break;
		}
	} while (n);



	return 0;
}



















