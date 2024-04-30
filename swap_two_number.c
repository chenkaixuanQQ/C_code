#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Swap two number without creating new variable:


int main()
{
	int a = 10;
	int b = 20;

	a = a ^ b;
	b = a ^ b;//b = a;
	a = a ^ b;//a = b

	printf("a = %d\nb = %d\n", a, b);

	//err:
	/*a = a ^ b;
	a = a ^ b;//a = a ^ b ^ b = a (Swap err)
	b = a ^ b;*/  


	return 0;
}




