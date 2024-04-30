#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	int arr[n] = { 0 };
	int i = 0;
	
	for(i = 0;i < n; i++)
	{
		scanf("%d", &arr[i]);
		printf("%d ", &arr[i]);		
	}
	return 0;
}


 
