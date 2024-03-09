#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#pragma pack(x);//可以用x来设置结构体的默认对齐数

struct Stu
{
	char ch1;
	int i;
	char ch2;
}S1;

struct Stu2
{
	char ch1;
	char ch2;
	int i;

}S2;

struct Stu3
{
	double a;
	char ch1;
	int i;
	char ch2;

}S3;

struct Stu4
{
	int i;
	char ch1;
	char ch2;


};
//
//int main()
//{
//	struct Stu S1 = { '1', 0x11223344, '2' };
//	struct Stu2 S2 = { '1', '2', 0x11223344 };
//
//	printf("%zd\n", sizeof(struct Stu));
//	printf("%zd\n", sizeof(struct Stu2));
//	printf("%zd\n", sizeof(struct Stu3));
//	printf("%zd\n", sizeof(struct Stu4));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(float));
//
//	return 0;
//}


struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;

};

struct B
{
	int _a : 3;
	char _b : 2;
	int _c : 4;

};

int main()
{
	//printf("%d\n", A._a);
	printf("%zd\n", sizeof(short));
	struct A a1 = { 0b11, 0, 0b11111111, 0};

	int num1 = 0;
	int num2 = 1;

	printf("%zd\n", sizeof(struct A));
	printf("%zd\n", sizeof(struct B));

	return 0;
}