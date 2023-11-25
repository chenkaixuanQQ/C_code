#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int b = 0x12345;

//void test(int b)
//{
//	b = 0x123;
//	printf("%x\n", b);
//}


int* test_t()
{
	int a = 10;
	return &a;
}

int main()
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//int* pa1 = arr;
	//int* pa2 = &arr[9];

	//pa2 -= 1;
	//printf("%p\n", &arr[9]);
	//printf("%p\n", pa2);


	//char ch1[] = "ab\0cd";

	//printf("%zd\n", strlen(ch1));
	//printf("%zd\n", sizeof(ch1));

	//int a = 0x1234;
	//
	//test(b);

	//printf("%x\n", b);


	int* pt = test_t();

	printf("我真的爱你\n");
	printf("句句不轻易\n");
	printf("%zd\n", strlen("我"));

	printf("%d\n", *pt);

	return 0;
}




