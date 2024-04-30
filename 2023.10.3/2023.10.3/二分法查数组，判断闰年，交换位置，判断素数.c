#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<string.h>



//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *py;
//	*py = *px;
//	*px = z;
//}
//
//
//
//
//int main()
//{
//	//输入两个数
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//交换
//	printf("交换前：a = %d , b = %d\n", a, b);
//	Swap(&a, &b);
//
//	printf("交换后：a = %d, b = %d\n", a, b);
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	//int b = 20;
//	//int* px = &a;
//	//*px = 30;
//	//px = &b;
//	//*px = 9;
//	//printf("%d\n", *px);
//	&a;
//	return 0;
//}



//写一个函数，判断一下它是不是素数

//
//bool  whether(int x)
//{
//	int i = 1;
//	for (i = 2; i < x; i++)
//	{
//		if (0 == x % i)
//		{
//			return false;
//		}
//	}
//	if (i == x)
//		return true;
//
//}
//
//
//
//
//int main()
//{
//	//输入一个数
//	int a = 0;
//	printf("请输入您要判断的数：");
//
//	scanf("%d", &a);
//
//	printf("%zd\n", sizeof(whether(a)));
//	
//	if (whether(a))
//		printf("这是一个素数\n");
//	else
//		printf("这不是一个素数\n");
//		return 0;
//}







//写一个函数来判断闰年

//int judge(int x)
//{
//	if (0 == x % 4 && 0 == x % 400)
//		return 1;
//
//	else if (0 != x % 100)
//		return 1;
//
//	else
//		return 0;
//		
//}
//
//int main()
//{
//	//输入一年
//	int year = 0;
//	printf("Please enter the year you want to confirm:");
//	scanf("%d", &year);
//	
//	//判断该年是否为闰年
//
//	//输出数据，做出判断
//	if (judge(year))
//		printf("%d year is really a leap year!\n", year);
//
//	else
//		printf("Sorry,%d year isn't a leap year.\n", year);
//
//
//	return 0;
//}




//用函数来使用二分法查找一个数组内的数据位置
//
//int position_confirm(int arr1[], int x,int sz)
//{
//
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right)/2;
//	while (x <= arr1[sz - 1])
//	{
//		if (x == arr1[mid])
//			return mid;
//
//		else if (x < arr1[mid])
//			right = mid - 1;
//
//		else
//			left = mid + 1;
//
//		mid = (left + right) / 2;
//	}
//
//
//	return -1;
//}
//
//int main()
//{
//	//Firstly,creat a array.
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//Secondly,enter a number.
//	int num = 0;
//	again:
//	printf("Please enter the number you want to check:");
//	scanf("%d", &num);
//
//	//In the end,confirm it's position.
//	int c = position_confirm(arr,num,sz);
//	
//		if(-1 == c)
//		{
//			printf("Sorry,the number you enter isn't in the array.\n");
//			goto again;
//	     }
//
//		else
//	{
//		printf("Find it!It is the %dth in the array!\n", c);
//	}
//	return 0;
//}





void number(int* pn )
{
	*pn += 1;
}





int main()
{
	int num = 0;
	number;

	for (int i = 0; i <= 5; i++)
	{
		number(&num);
	}

	printf("%d\n", num);
	return 0;
}



















