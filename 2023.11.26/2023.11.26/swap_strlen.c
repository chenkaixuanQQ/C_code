#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t Swap_strlen(char* cc)
{
	size_t count = 0;
	assert(cc != NULL);
	while (*cc != '\0')
	{
		count++;
		cc++;
	}
	return count;
}

int main()
{
	char ch[] = "abc\0defg";

	size_t ret = Swap_strlen(ch);

	printf("%zd\n", sizeof("abc"));
	printf("%zd\n", sizeof(ch));
	printf("%zd\n", strlen(ch));
	printf("%zd\n", ret);

	return 0;
}




