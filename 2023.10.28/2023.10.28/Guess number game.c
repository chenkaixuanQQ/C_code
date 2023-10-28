#define   _CRT_SECURE_NO_WARNINGS 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>



//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;// 4 7 10 13 16 19 22
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//Guess the number:


void menu()
{
	printf("########################\n");
	printf("#####	1.play	########\n");
	printf("######	0.exit	########\n");
	printf("########################\n");
}

void game()
{
	//1.Generate a random number:
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;  //Control the number between 1 to 100

	//Guess the number:
	int Guess = 0;
	do
	{
		printf("Please guess the number:>");
		scanf("%d", &Guess);

		if (Guess == ret)
			printf("Congratulations!You guess it right!\n");
		else if (Guess > ret)
			printf("You guessed too big.Please try again!\n");
		else
			printf("You guessed too small.Please try again!\n");

	} while (ret != Guess);

}

int main()
{
	again:
	//Generate a menu:
	menu();

	//Let user choose whether to play:
	int whether_to_play = 0;
	printf("Please choose whether to play the game about guess number:");
	scanf("%d", &whether_to_play);

	//Write the game:
	switch (whether_to_play)
	{
	case 0:
		printf("Successfully exited the game!\n");
		break;

	case 1:
		game();   
		break;

	default:
		printf("Please enter 1 or 2!!!\n");
		goto again;
	}

	return 0;
}



