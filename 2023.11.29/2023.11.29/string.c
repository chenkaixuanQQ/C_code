#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

////�����ַ�����6���ֽڣ���
//
//int my_strlen(char ch[])
//{
//	int count = 0;
//	for (count = 0; ch[count] != '\0'; count++);
//	return count;
//}
//
//int main()
//{
//	//char ch[10] = "abcdefg";
//	//strcpy(ch, ch + 3);
//	//strcpy(ch+3, "123");
//	//printf("%s\n", ch);
//
//	char ch[100] = {0};
//	char ch1[100] = { 0 };
//
//	printf("����������Ҫ�������ַ�����>");
//	scanf("%s", ch);
//
//	int sz = my_strlen(ch);
//
//	strcpy(ch1, ch);
//
//	int k = 0;
//
//	printf("���������������ĸ�����>");
//	scanf("%d", &k);
//
//	
//
//	if (k >= sz)
//		k = k % sz;
//
//	strcpy(ch, ch1 + k);
//	strcpy(ch + sz - k, ch1);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", ch[i]);
//	}
//
//	return 0;
//}




//int main()
//{
//	char ch[30] = "asd\0vbn";
//	char ch1[] = "ÿ�춼Ҫ�������ĵ�";
//
//	strncat(ch, ch1, 20);
//
//	printf("%s", ch);
//
//	return 0;
//}



//int main()
//{
//	int i = 10;
//	assert(i == 0);
//	printf("Hello bit!");
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}


	return 0;
}


