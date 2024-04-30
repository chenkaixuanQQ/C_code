#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int n = 0;
	n = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == n)
		{
			printf("找到了，下标是%d\n", i);
			break;
		}



	}

	if (i == sz)
		printf("找不到哦\n");



	return 0;
}




















