#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct stu
{
	char name[20];
	int age;
	int score;
};


void Print(char ch[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", ch[i]);
	}
	printf("\n");
}

int main()
{
	
	
	//struct stu arr[] = { { "zhangsan", 18, 98 }, { "lisi", 17, 99 }, { "wanggwu", 18, 100 }, { "zhaoliu",18, 88 } };
	//
	//int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), strcmp);

	char ch[] = { 'c','f','h','v','z','r' };
	int sz = sizeof(ch) / sizeof(ch[0]);
	qsort(ch, sz , sizeof(ch[0]), strcmp);

	Print(ch, sz);
	return 0;
}




