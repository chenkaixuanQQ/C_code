#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�

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


