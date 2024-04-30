#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void BubSort(int* arr, int sz)
{
	int i = 0;
	int t = 0;
	for (int j = sz - 1; j >= 0; j--)
	{
		//int count = 0;
		for (i = 0; i < j; i++)
		{
			if (arr[i] >= arr[i + 1])
			{
				t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t;
				//count++;
			}
		}
		//if (count)
		//	break;
	}
}

int main()
{
	//输入要排序的数组：
	int arr[8] = { 0 };
	printf("请输入要排序（升序8个）的数组：");

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr + i);
	}

	BubSort(arr, sz);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}

	return 0;
}





