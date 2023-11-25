#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", sizeof(int*));
//	return 0;
//}



int main()
{
    int M = 0;
    scanf_s("%d", &M);
    int a = M % 5;
    if (a == 0)
        printf("YES\n");
    else
        printf("NO\n");
    printf("%d\n", a);
    return 0;
}


