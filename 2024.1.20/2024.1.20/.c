#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



int main()
{
	//char ch[] = { "asd" };
	//printf("%zd\n", strlen(ch));
	//printf("%zd\n", strlen(ch + 0));
	
	char* ch = "abcd";
	printf("%p\n", ch);
	printf("%p\n", ch + 1);
	printf("%p\n", &ch);
	printf("%p\n", "abcd");

	char* *pa = ch;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", ch);
	printf("%p\n", *pa + 1);




	return 0;
}



