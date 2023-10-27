#include<stdio.h>
//int main()
//{
//	printf("\101");
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
	//while (i <= 10 )
	//{

	//	
	//	
	//	printf("%d\n",i);
	//	if (5 == i)
	//		continue;
	//	i++;
	//}
//	if (i <= 10)
//	{
//		printf("我很快乐！");
//		continue;
//
//		i++;
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//
//
//
//
//	int ch = getchar();
//	printf("%d\n", ch);
//	putchar(ch);
//	return 0;
//}
//







//
//int main()
//{
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if(0 == i % 4)
//		   printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (0 == i % 4)
//			printf("%d\n", i);
//
//
//
//
//	}
//	return 0;
//}
  



//
//int main()
//{
//
//	int i = 100;
//
//	while (i < 201)
//	{
//	  	  int r = 2;
//		
//		while (r < i)
//		{
//			if (0 == i % r)
//				break;
//			r++;
//		}
//		if (i == r || i % r != 0 )
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//
//
//






//int main()
//{
//	//输入
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	//排序
//
//	if(a  > b && a  > c && b > c)
//		
//	//输出
//
//
//
//
//
//	return 0;
//}
//
//




















int main()
{
	int isPrime = 1;
	int number = 0;

	printf("Please type a number:\n");
	scanf_s("%d", &number);

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0) 
		{
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1) {
		printf("number %d is a Prime.", number);
	}
	else {
		printf("number %d isn't a Prime.", number);
	}
	return 0;
}










