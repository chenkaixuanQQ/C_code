#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int main()
{
	//int a = 0;
	//int b = -5;

	//int c = ~b;
	////~b(b = 3)
	////00000000000000000000000000000011    Original code of 3
	////11111111111111111111111111111100    Bitwise negation
	////11111111111111111111111111111011	  Complement - 1
	////10000000000000000000000000000100    Original code

	////b = -3
	////10000000000000000000000000000011    Original code of -3
	////11111111111111111111111111111100    Inverse code of -3
	////11111111111111111111111111111101    Complement of -3 
	////00000000000000000000000000000010    bitwise negation

	////long d = &a + 0x4;

	//int d = a < b;

	//printf("%d %d %d %d\n", a, b, c, d);

	//char a1 = 257;
	//unsigned int a2 = -1;
	////-1
	////10000000000000000000000000000001
	////11111111111111111111111111111110
	////11111111111111111111111111111111    Complement

	//printf("%d %u\n", a1, a2);

	//printf("%zd\n", sizeof(float));

	//int a3 = 4;
	//int a4 = a3 + --a3;
	//printf("%d \n", a4);

	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("%d\n", i);

	//int y = (i = 3);
	//printf("%d \n", y);

	char arr[] = { 'a','b','c'};

	int* pa = arr + 0b1;

	*pa = 'f';

	printf("%c\n", arr[1]);




	return 0;
}












