#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct phone_number
{
	char name[20];
	char phone_number[20];
};


int main()
{
	//int a = 13;
	//int b = 29;
	//printf("%d\n", a & b);
	
	struct phone_number mem1 = { "qinqin","234560" };
	struct phone_number mem2 = { "dad","123456" };
	struct phone_number mem3 = { "mom","001234" };

	struct phone_number* p1 = &mem1;
	struct phone_number* p2 = &mem2;
	struct phone_number* p3 = &mem3;

	printf("%s 的电话号码是 %s\n", mem1.name, mem1.phone_number);
	printf("%s 的电话号码是 %s\n", mem2.name, mem2.phone_number);
	printf("%s 的电话号码是 %s\n", p3 ->name, p3->phone_number);



	return 0;
}








