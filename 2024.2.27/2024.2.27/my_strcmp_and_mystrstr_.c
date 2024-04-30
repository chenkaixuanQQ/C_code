#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//Realize my_strcmp && my_strstr

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (1)
	{
		if (*str1 == *str2 && *str1 == '\0')
		{
			return 0;
		}
		else if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if (*str1 > *str2)
			return 1;
		else
			return -1;
	}
}


char *my_strstr(const char* s1, const char* s2)
{
	assert(s1 && s2);
	int i = 0;
	int t = 0;

	while(s2[t] != '\0')
	{ 
		if (s1[i] == s2[t])
		{
			i++;
			t++;
		}
		else if (s1[i] == '\0')
		{
			t = 0;
			break;
		}
		else
		{
			t = 0;
			i++;
		}
	}
	

	return (char*) & s1[i - t];
}




//
//int main()
//{
//	char ch1[20] = "abcdef";
//	char ch2[20] = "abcdefwefr";
//
//	int ret = my_strcmp(ch1, ch2);
//	
//	if (ret > 0)
//		printf("ch1 > ch2");
//	else if (ret < 0)
//		printf("ch1 < ch2");
//	else
//		printf("ch1 = ch2");
//
//	return 0;
//}
//



int main()
{
	char ch1[] = "I love you!";
	char ch2[] = "love";

	char *ret = my_strstr(ch1, ch2);

	if (ret != '\0')
		printf("%s\n", ret);
	else
		printf("Program couldn't find the same string in ch1!\n");

	return 0;
}