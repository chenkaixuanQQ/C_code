#include<stdio.h> 
int test()
{
	static  int a = 1;
	a++;
	printf("%d\n",a);
	
}
int main()
{
    int a = 0 ;
	int i = 0;
	while(i < 10)
	{
		test();
		i++;
	}
	printf("%d\n",a);
     return 0;
}










