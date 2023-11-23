#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int i;
//
//int main()
//{
//	int a = sizeof(int);
//	printf("%d \n", a);
//	printf("%d \n", i);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	int j = 0;

	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{
			if (j == i)
				j++;
			if (arr[i] == arr[j])
				break;
		}

		if (arr[i] != arr[j])
			printf("%d\n", arr[i]);

	}

	return 0;
}




