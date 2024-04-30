#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//Print "Welcome to bit !!!"


//int main()
//{
//	char arr1[] = { "Welcome to bit !!!" };
//	//printf("%zd\n", sizeof(arr1) / sizeof(arr1[0]));
//	char arr2[] = { "##################" };
//
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int i = right;
//	int left = 0;
//
//
//	for (left = 0; left <= right; left++)
//	{
//	
//		
//
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//	}
//
//	return 0;
//}


//折半查找有序数组：

int main()
{
	//创建数组：
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	//输入要查找的数：
	int k = 0;
	scanf("%d", &k);

	//开始查找：
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int left = 0;
	int right = sz - 1;
	for (i = 0; i < sz; i++)
	{

		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("找到了，下标是 %d\n", mid );
			break;
		}
	}

	if (i == sz - 1)
		printf("找不到！");

	return 0;
}








