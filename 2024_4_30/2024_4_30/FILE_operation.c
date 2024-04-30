#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//fputc/fgetc
//fputs/fgets
//fsanf/fprintf

//
//int main()
//{
//	//FILE* pf = fopen("data.txt", "w");
//	FILE* pf = fopen("data.txt", "r");
//	FILE* pf_cpy = fopen("data_cpy.txt", "w");
//	//Judge whether open successfully
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		perror("fopen:");
//		return 1;
//	}
//
//	//Write FILE:
//	
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	//fputc('d', pf);
//	//fputc('e', pf);
//	//fputc('f', pf);
//	//fputc('g', pf);
//
//	//int cpy = 0;
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	cpy = fgetc(pf);
//	//	fputc(cpy, pf_cpy);
//	//}
//
//	////Close FILE
//	//fclose(pf);
//	//pf = NULL;//Keep good code writing habit
//
//
//	return 0;
//}



//Copy the data in data.txt to data2.txt;
int main()
{
	//1.Creat pointer:
	FILE* pfread = fopen("data.txt", "r");
	if (pfread == NULL)
	{
		perror("fopen -> data.txt:");
		return 1;
	}

	FILE* pfcpy = fopen("data2.txt", "w");
	if (pfcpy == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		perror("fopen -> data2.txt:");
		return 1;
	}

	//2.Copy:
	int cpy = 0;
	while ((cpy = fgetc(pfread)) != EOF)
	{
		fputc(cpy, pfcpy);
	}
	//3.Close FILE:
	fclose(pfread);
	pfread = NULL;
	fclose(pfcpy);
	pfcpy = NULL;
	return 0;
}
