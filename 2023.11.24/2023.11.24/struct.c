#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct stu
{
	char name[20];
	char sex[10];
	int score;
};




int main()
{
	struct stu student = { "zhangsan","male",100 };

	printf("������%s\n",student.name);
	printf("�Ա�%s\n",student.sex);
	printf("������%d\n",student.score);

	//const int a = 10;
	//int arr[] = { 0 };


	//const int a = 10;
	//const int* pa = &a;
	//pa++;
	//*pa = 100;
	//printf("a = %d\n", a);

	int a = 10;
	int* pa = &a;

	int* pb = &pa;

	printf("%p\n", pb);
	printf("%p\n", *pb);
	printf("%p\n", *pb);











	return 0;
}









