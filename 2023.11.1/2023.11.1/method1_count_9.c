#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//Count how many digit 9 occurred appear between 1 and N( between 1 and 100 );
int Count(int n);
int main()
{
	//Enter a number:
	int N = 0;
	printf("Please enter a number:>");
	scanf("%d", &N);

	//Count:
	int nine_appear = Count(N);

	//Output:
	printf("The number 9 appear %d times in total£¡", nine_appear);

	return 0;
}


int Count(int n)
{
	int i = 9;
	int cout = 0;

	for (i = 9; i <= n; i += 10)
	{
		if (n >= i)
			cout++;

	}

	if (n >= 90 && n < 101)
	{
		for (i = 90; i <= n; i++)
		{
			cout++;
		}
	}
	return cout;
}







