#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//Realize my_strcpy

//char* my_strcpy1(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	int i = 0;
//	for (i = 0; src[i] != '\0'; i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[i] = src[i];
//	return dest;
//}
//
//char* my_strcpy2(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	int i = 0;
//	do
//	{
//		dest[i] = src[i];
//		i++;
//
//	} while (src[i] != '\0');
//
//
//	return dest;
//}
//
//
//int main()
//{
//
//	char ch1[20] = { 0 };
//	char ch2[] = "abcdeasdgeqf";
//	my_strcpy2(ch1, ch2);
//	printf("%s\n", ch1);
//	char ch3[20] = { 0 };
//	printf("%s\n", strcpy(ch3, ch2));
//	
//	
//	printf("%zd\n", strlen(ch1) + 1);
//	return 0;
//}






//Relize strcat

char* my_strcat1(char* dest, const char* src)
{
	int i = 0;
	for (i = 0; dest[i] != '\0'; i++);
	int t = 0;

	for (t = 0; src[t] != '\0'; i++, t++)
	{
		dest[i] = src[t];
	}

	//printf("%zd\n", strlen(src));

	//Let dest's last element be '\0' 
	dest[i] = src[t];

	return dest;
}


char* my_strcat2(char* dest, const char* src)
{
	char* ret = dest;

	//Find '\0'
	while (*dest)
	{
		dest++;
	}

	//Copy
	while (*dest++ = *src++);

	//Let the last element be '\0'
	*dest = *src;

	return ret;
}




int main()
{
	char ch1[20] = { "Hello "};
	char ch2[] = "world!";

	my_strcat2(ch1, ch2);

	printf("%s\n", ch1);

	return 0;
}