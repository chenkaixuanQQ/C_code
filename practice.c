#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 6;
//	int ret = 10;
//	ret ^= i;
//	printf("%d\n", ret);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int find_single_dog(int arr[], int sz)
//{
//    int ret = 0;
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    return ret;
//}
//
//int main()
//{
//    int arr[] = { 1,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int dog = find_single_dog(arr, sz);
//    printf("%d\n", dog);
//
//
//    return 0;
//}

//int main()
//{
//	//int a = -1;
//	//a = a >> 7;
//	//printf("%d\n", a);
//
//
//	return 0;
//}



//int main()
//{
//	//int a = 18;
//	//int b = 3;
//	//int c = a ^ b;
//	//printf("%d\n", c);
//	int c = -1 ^ 9;
//	printf("%d\n", c);
//
//
//	return 0;
//}


////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 32;
//	printf("even:");
//	int ret = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		ret = num >> i;
//		printf("%d", ret % 2);
//	}
//	printf("\n odd:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		ret = num >> i;
//		printf("%d", ret % 2);
//	}
//
//	return 0;
//}



//���������������в�ͬλ�ĸ���

int main()
{
	int a = 0;
	int b = 0;
	printf("����������Ҫ�Ƚϵ���������");
	scanf("%d %d", &a, &b);

	int c = a ^ b;//c�Ķ��������е�1���������������Ʋ�ͬ�ĵط���

	//��һ��c���ж��ٸ�1�Ϳ����ҵ����������Ķ����������ж���λ��ͬ��

	int count = 0;
	while (c)
	{
		c = c & (c - 1);
		count++;
	}

	printf("���������Ķ�������������%d��������λ����ͬ��", count);

	return 0;
}
