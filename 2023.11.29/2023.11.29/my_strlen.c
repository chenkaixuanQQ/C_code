#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Simulate the implementation of the "strlen".

int my_strlen(char ch[])
{
	int count = 0;

	int i = 0;
	for (i = 0; ch[i] != '\0'; i++)
	{
		count++;
	}

	return count;
}

int main()
{
	char ch[100] = { 0 };
	printf("Please enter a string you want to get it's length:>");
	scanf("%s", ch);

	int length = my_strlen(ch);

	printf("The length of the sting is %d\n", length);

	return 0;
}


