#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x = 9;//x = 1001
	int y = 3;//y = 0011
	          //^ = 1010  ��ͬΪһ��ͬΪ��
			  //& = 0101  ͬΪһ��Ϊһ������Ϊ��
	int a = 12;// a = 1100
	int b = 15;// b = 1111
			   // ^ = 1100
			   // & = 1100
	printf("%d\n", x ^ y);
	printf("%d\n", x & y);
	printf("%d\n", a ^ b);
	printf("%d\n", a & b);

	printf("%d\n", -0b1);
	printf("%d\n", 16 & -1);
	return 0;
}






