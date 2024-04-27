#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//int Step_jump(int n, int a, int b, int c)
//{
//    if (n > 0)
//    {
//        return Step_jump(n - a, a, b, c) + Step_jump(n - b, a, b, c) + Step_jump(n - c, a, b, c);
//    }
//    else if (n == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//
//
//}
//
//
//
//
//
//int main()
//{
//    //先完成输入：
//    int n = 0;
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    scanf("%d", &n);
//    scanf("%d %d %d", &a, &b, &c);
//
//    int ret = Step_jump(n, a, b, c);
//    printf("%d", ret);
//
//
//    return 0;
//}


int main()
{
	int a = 5 / 6 * 7 / 8 ;
	//int a = 3 % 4;
	printf("%d\n",a);

	return 0;
}

