#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//
////��һ�����������о�ȷ�ҵ��Լ���Ҫ���Ǹ���
////���ַ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	//����һ����
//	scanf_s("%d", &n);
//
//	//����
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] == n)
//		{
//			printf("�ҵ��ˣ���Ԫ���½Ǳ�Ϊ%d\n", mid);
//			break;
//		}
//		else if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//	}
//
//	if (left > right)
//		printf("�Ҳ�����Ԫ�أ�");
//
//
//
//		return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c' };
//	int x = sizeof(arr);
//	printf("%d\n", x);
//
//
//	return 0;
//
//}
//



//
////��ӡ1��100֮�����е����ı���
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//




//int main()
//{
//	printf("Do you like M.r Chen?\n");
//	char password[] = { 0 };
//	scanf("%s", password);
//	if (strcmp(password, "YES") == 0)
//		printf("Chen Kaixuan also like you!");
//	else if (strcmp(password, "NO") == 0)
//		printf("Sorry,it is your loss.");
//	else
//		printf("Please try again,and tpye YES or NO,please!");
//	return 0;
//}
//







//������������
//int main()
//{
//	int  arr[3];
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	int i = 0;
//	int t = 0;
//	for (i = 0;; i++)
//	{
//		if (i == 3)
//			i = 0;
//
//		if (arr[i] < arr[i + 1])
//		{
//			t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//		}
//		if (arr[0] > arr[1] && arr[1] > arr[2])
//			break;
//	
//	}
//	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//
//	return 0;
//}
//






int main()
{
again:;
	
	printf("����Ҫ���֣�");
	printf("��������ֵģ�");
	goto again;

	return 0;
 }











