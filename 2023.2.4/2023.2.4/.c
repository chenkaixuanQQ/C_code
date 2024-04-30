#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	//int arr[5][5] = { 0 };
	//int(*p)[5];
	//p = arr;
	//printf("%p\n", arr);
	//printf("%p\n", p);
	//printf("%p\n", arr[1]);
	//printf("%p\n", arr[2]);

	//int arr1[5] = { 0 };
	//printf("%p\n", arr1);
	////printf("%p\n", &arr1[1]);

	//int arr2[5] = { 0 };
	//printf("%p\n", arr2);

	//char* ch[] = { "workasd", "at", "bit" };
	//printf("%p\n", ch[0]);
	////printf("%p\n", "work");
	////printf("%p\n", "at");
	//printf("%p\n", ch[1]);

	////printf("%s\n", ch[1] + 1);
	////printf("%s\n", ch[1] + 4);

	//printf("%p\n", ch[2]);

	//char* ch[] = { "worakskjh", "at", "sm" };
	//printf("%p\n", ch[0]);
	//printf("%p\n", ch[1]);
	//printf("%p\n", ch[2]);

	//printf("%d\n", 'a');

	//char a[] = {getchar()};
	//printf("%s\n", a);

	char ch[] = "I AM A Student";
	int i = 0;
	int len = strlen(ch);
	for (i = 0; i <= len; i++)
	{
		putchar(toupper(ch[i]));
	}


	return 0;
}






