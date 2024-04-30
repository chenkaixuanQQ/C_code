#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



int main()
{
	//char ch[] = "asdf\0";

	//printf("%zd\n", sizeof(ch));
	//printf("%zd\n", strlen(ch));
	//printf("%zd\n", sizeof(&ch[0]));

	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	
	//int(*pa)[10] = &arr;
	//printf("%p\n", *pa);
	//printf("%p\n", *pa + 1);
	//printf("%p\n", arr);
	//printf("%p\n", arr + 1);
	//printf("%p\n", pa + 1);
	//printf("%p\n", &arr + 1);
	
	char ch[10] = { 'a','b','c' };

	printf("%d\n", strlen(ch));
	printf("%d\n", strlen(&ch + 1));






	return 0;
}