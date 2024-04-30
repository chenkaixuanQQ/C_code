#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		static int t = 1;
//		static  i = 1;
//		printf("%d ", i);
//	}
//	
//	printf("%d\n", t);
//
//	return 0;
//}



//void Add(int i)
//{
//	static i = 0;
//}


//int main()
//{
//
//	for (static int i = 0; i < 5; i++)
//	{
//		//Add(i);
//		printf("%d ", i);
//	}
//
//	printf("%d ", i); 
//
//
//	return 0;
//}


int main()
{

	int i = 0;
	again:
	{
		static int i = 3;
		i++;
		printf("%d", i);
	}
	printf("%d ", i);

	if (i < 10)
		goto again;
	return 0;
}








