#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 6;
//	int ret = 10;
//	ret ^= i;
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int find_single_dog(int arr[], int sz)
//{
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    return ret;
//}
//
//int main()
//{
//    int arr[] = { 1,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int dog = find_single_dog(arr, sz);
//    printf("%d\n", dog);
//
//
//    return 0;
//}

//int main()
//{
//	//int a = -1;
//	//a = a >> 7;
//	//printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	//int a = 18;
//	//int b = 3;
//	//int c = a ^ b;
//	//printf("%d\n", c);
//	int c = -1 ^ 9;
//	printf("%d\n", c);
//
//
//	return 0;
//}


////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 32;
//	printf("even:");
//	int ret = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		ret = num >> i;
//		printf("%d", ret % 2);
//	}
//	printf("\n odd:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		ret = num >> i;
//		printf("%d", ret % 2);
//	}
//
//	return 0;
//}



//求两个数二进制中不同位的个数

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入您想要比较的两个数：");
	scanf("%d %d", &a, &b);

	int c = a ^ b;//c的二进制数中的1就是两个数二进制不同的地方：

	//数一下c中有多少个1就可以找到这两个数的二进制数中有多少位不同：

	int count = 0;
	while (c)
	{
		c = c & (c - 1);
		count++;
	}

	printf("这两个数的二进制序列中有%d个二进制位不相同！", count);

	return 0;
}
