#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

void Sort(int arr[], int sz)
{
	//Put odds and evens into different array:
	int odd_arr[10] = { 0 };
	int even_arr[10] = { 0 };

	int i = 0;
	int j = 0;
	int t = 0;
	for (i = 0; i < sz; i++)
	{
		if (0 == arr[i] % 2)
		{
			even_arr[j] = arr[i];
			j++;
		}
		else
		{
			odd_arr[t] = arr[i];
			t++;
		}
	}

	for (i = 0; i < t; i++)
	{
		arr[i] = odd_arr[i];
	}

	for (i = t,j = 0; i < sz; i++,j++)
	{
		arr[i] = even_arr[j];
	}
	
}

int main()
{
	//Creat a array:
	int arr[10] = { 0 };
	int i = 0;
	printf("Please enter ten numbers:>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", arr+i);
	}

	//Get element count of the array:
	int sz = sizeof(arr) / sizeof(arr[0]);

	Sort(arr,sz);

	printf("After sort:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	

	return 0;
}





