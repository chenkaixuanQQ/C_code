#define   _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <string.h>

int main()
{
	char like_ckx[4] = { 0 };
	again:
	printf("Do you like Mr.chen ? Please answer with \"YES\" or \"NO\"\n");
	scanf("%s", like_ckx);

	if (strcmp(like_ckx, "YES") == 0)
		printf("Mr.chen also like you!\n");
	else if (strcmp(like_ckx, "NO") == 0)
		printf("It's my pity!\n");
	else
	{
		printf("Please enter YES or NO!!!Please try again!\n");
		goto again;
	}


	return 0;
}





























