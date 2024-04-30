#define   _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//    int score1 = 0, score2 = 0, score3 = 0;
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d %d %d", &score1, score2, score3);
//    }
//    printf("score1=%d,score2=%d,score3=%d");
//    return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c = 6,a = 6;
//	b = ++c, c++, ++a, a++;//b = 7; a = 8 ; c = 8
//	b += a++ + c;  //a = 9；b=23, c = 8;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//
//
//		scanf("%d %d %d", arr);
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//
//	return 0;
//}
//



////打印1到num之间所有3的倍数
//
//int main()
//{
//	//Enter a number:
//	int num = 0;
//	printf("Please enter a number that you want to check:");
//	scanf("%d", &num);
//
//	//Find the multiple of number 3:
//	if ( num < 3)
//		printf("Please enter a number that greater than three.");
//
//	int i = 0;
//	for (i = 3; i <= num; i += 3)
//		printf("%d ", i);
//
//	return 0;
//}


////Enter three numbers and sort these numbers from small to large:
//
//int main()
//{
//	//Enter three numbers:
//	int arr[4] = { 0 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	//Sort :
//
//	for (int i =  0;;i++)
//	{
//		if (arr[i] >= ((arr[0] > arr[1] ? arr[0] : arr[1]) > arr[2] ? (arr[0] > arr[1] ? arr[0] : arr[1]) : arr[2]))
//		{
//			printf("%d ", arr[i]);
//			arr[i] = 0;
//			i = -1;
//		}
//
//		if (arr[1] == arr[0] && arr[1] == arr[2] && arr[0] == 0)
//			break;
//	}
//	return 0;
//}


////If you enter a number,the program will output the reverse order one by one.
//
//int main()
//{
//	//Enter a number:
//	int num = 0;
//	printf("Please enter a number:");
//	scanf("%d", &num);
//
//	//Sort it in reverse order:
//	int count = 0;//To count how many digit the number is.
//	while (num != 0)
//	{
//		num /= 10;
//		count++;
//	}
//
//	for (; count == 0; count--)
//	{
//		printf("%d  ", num % 10);
//	}
//
//
//	return 0;
//}



//void love(n)
//{
//	n++;
//}
//
//int main()
//{
//	static int n = 0;
//
//	love(n);
//
//	printf("%d\n", n);
//
//	return 0;
//}



//Output the sum of numbers in multiples of three between 1 and n


int main()
{
	//Enter a number:
	int n = 0;
	printf("Please enter a number:");
	scanf("%d", &n);

	//Select the numbers in multiple of three,and calculate the sum:
	int i = 0;
	int sum = 0;
	for (i = 3; i <= n; i += 3)
	{
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}


















