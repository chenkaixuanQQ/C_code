#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int a = 10;
//
//void test(int c)
//{
//	a = 100;
//}
//
//int main()
//{
//	printf("%d ", a);
//
//	test(a);
//
//	printf("%d ", a);
//
//	return 0;
//}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int(*pa)[10] = &arr;

	printf("%p\n", arr);
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", &arr + 1);

	printf("asdf\0sddf\n");
	printf("%s\n", "asd\0asdj");

	return 0;
}




