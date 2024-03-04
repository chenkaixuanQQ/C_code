#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


void * my_memcpy(void * dest, const void * src, size_t num)
{

	assert(dest && src);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		((char *)dest)[i] = ((char*) src)[i];
	}

	return dest;
}


void* my_memmove(void* dest, const void* src, size_t num)
{
	//First copy src:
	int i = 0;

	//In fact, we should use variable array: src_cpy[num + 1]
	char src_cpy[100] = { 0 };

	for (i = 0; i < num; i++)
	{
		src_cpy[i] = ((char*)src)[i];
	}

	for (i = 0; i < num; i++)
	{
		((char*)dest)[i] = src_cpy[i];
	}

	return dest;
}


int main()
{
	char str1[] = "I  love you!";
	char str2[30] = "Miss you much!";

	//my_memcpy(str2 + 14, str1, 13);
	//printf("%s\n", str2);

	my_memmove(str2, str2 + 3, 5);
	printf("%s\n", str2);


	return 0;
}



