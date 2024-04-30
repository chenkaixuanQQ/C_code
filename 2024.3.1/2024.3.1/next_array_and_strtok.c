#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//next array in KMP algorithm

void computeNext(char* pattern, int* next)
{
	int j = 0;
	next[0] = -1;
	int k = -1;

	while (j < strlen(pattern) - 1)
	{
		if (k == -1 || pattern[j] == pattern[k])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
}

void my_next_array(const char* str, int* next)
{
	int j = 0;
	int k = -1;

	if (k == -1)//k回到-1，意味着j处与首字符也无法匹配，故此j+1处next数组数为0
	{
		k++;
		j++;
		next[j] = 0;
	}
	else if (str[j] == str[k])//若j处与k处匹配成功，则next数组数++
	{
		k++;
		j++;
		next[j] = k;
	}
	else
	{
		k = next[k];

	}


}


int main()
{
	//Creates a string for the next array to be evaluated
	char str[] = "abcabbac";
	int my_next[20] = { 0 };

	//Calculate the next array:
	my_next_array(str, my_next);

	return 0;
}

//int main()
//{
//	char ch[] = "zhangsan@163.com";
//	char ch_copy[20];
//	strcpy(ch_copy, ch);
//	char* p = "@.";
//	char * ret = strtok(ch_copy, p);
//
//	printf("%s\n", ret);
//
//	return 0;
//}


//int main()
//{
//	//Creat an array to split,at the same time creat a copy
//	char str[] = "xiaolanqinqin@kaikai.com";
//	char str_copy[30] = { 0 };
//	strcpy(str_copy, str);
//
//	//Creat an array of separator characters
//	const char* sep = "@.";
//
//	//Loop and print:
//	char* s;
//	for (s = strtok(str_copy, sep);s != NULL;s = strtok(NULL,sep))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}




