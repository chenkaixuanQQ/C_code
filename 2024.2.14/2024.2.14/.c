#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	const int b = 0;
//	*(&a) = 3;
//	printf("%d\n", a);
//	char ch[] = { 'a','b' };
//	char ch1[] = "abc";
//	printf("%c\n", ch1[0]);
//	ch[0] = 'd';
//	ch1[0] = 'd';
//	printf("%s\n", ch1);
//	return 0;
//}

//


size_t my_strlen1(char ch[])
{
	int count = 0;
	int i = 0;
	for (i = 0; ch[i] != '\0'; i++);
	return i;
}


//不创建临时变量求字符串长度
// a b c \0
//return 1 + my_strlen("bc")
//return 1 + 1 + my_strlen("c")
//return 1 + 1 + 1 + my_strlen("")
//



//size_t my_strlen(const char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	printf("%zd\n", my_strlen(ch));
//	return 0;
//}


//
//int main()
//{
//	char ch1[20] = "xxxxxxxxxxxxxx\0xxx";
//	char ch2[] = "he\0llo.";
//	strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//
//	return 0;
//}


//int main()
//{
//	char ch1[20] = "xxxxxxx";
//	char ch2[7] = { 'a','b','c','d' };
//	strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//	printf("%s\n", strcpy(ch1, ch2));
//	return 0;
//}

char* my_strcpy(char* ch1, const char* ch2)
{
	int i = 0;
	for (i = 0; ch2[i] != '\0'; ch1[i] = ch2[i],i++);
	ch1[i] = '\0';
	return ch1;
}

int main()
{
	char ch1[20] = "xxxxxxxxxxxxx";
	char ch2[] = "Hello,world.";
	my_strcpy(ch1,ch2);
	printf("%s\n", ch1);



	return 0;
}


