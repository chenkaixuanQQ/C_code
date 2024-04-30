#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。

void init(int brr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		brr[i] = 0;
	}
}


void print(int crr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", crr[i]);
	}
}

void reverse(int arr[], int sz)
{
	int i = 0;
	int t = 0;
	for (i = 0; i <= sz - 1; i++,sz--)
	{
		t = arr[i];
		arr[i] = arr[sz - 1];
		arr[sz - 1] = t;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	reverse(arr, sz);

	print(arr,sz);


	return 0;
}


