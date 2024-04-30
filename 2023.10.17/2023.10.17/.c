#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////Enter a number and  determine whether it is a odd.
//int main()
//{
//	//Enter a number:
//	int num = 0;
//	scanf("%d", &num);
//	//Judge it.
//	if (1 == num % 2)
//		printf("%d is a odd\n", num);
//	else
//		printf("Sorry,%d isn't a odd\n", num);
//
//	return 0;
//}

//Enter an age and determine whether it is more than 18:

int main()
{
	//Enter an age:
	int age = 0;
	printf("Please enter an age:");
	scanf("%d", &age);

	//Judge:
	if (age >= 18)
		printf("The man is an adult!\n");
	else
		printf("Sorry,the man is also a kid.");
	return 0;
}


