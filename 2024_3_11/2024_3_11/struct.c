#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//int main()
//{
//	int* str = NULL;
//	//str = "abc";
//	//strcpy(str, "abc");
//	//printf("%s\n", str);
//	//printf("%p\n", &str);
//	//str = (int *)malloc(20);
//	//strcpy(str, "hello world.");
//	//*str = 0x11223344;
//	//free(str);
//	//str = NULL;
//
//	return 0;
//}

//struct ST
//{
//	int i;
//	int* arr;
//
//}s1;
//
//
//int main()
//{
//	//struct ST* pa = &s1;
//	struct ST* pa = (struct ST*)malloc(sizeof(struct ST));
//	pa->arr = (int*)malloc(40);
//	if (pa == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		pa->arr[i] = i;
//		printf("%d ", pa->arr[i]);
//	}
//	return 0;
//}



struct Stu
{
	int i;
	int arr[];
};


int main()
{
	struct Stu* pa = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));

	int num = 0;
	for (num = 0; num < 10; num++)
	{
		pa->arr[num] = num;
		printf("%d ", pa->arr[num]);
	}


	return 0;
}