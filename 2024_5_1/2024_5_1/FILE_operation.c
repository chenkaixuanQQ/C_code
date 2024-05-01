#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//fputc/fgetc
//fputs/fgets
// fscanf/fprintf
//

//int main()
//{
//	//FILE* pf = fopen("data.txt", "w");
//	//if (pf == NULL)
//	//{
//	//	perror("fopen :");
//	//	return 1;
//	//}
//
//	//char ch[30] = { 0 };
//
//	//for (int i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);
//	//}
//	//
//	//for(int i = 0; i < 26; i++)
//	//{
//	//	int ret = fgetc(pf);
//	//	printf("%c\n", ret);
//	//}
//
//	//int c = fscanf(pf, "%s", ch);
//	//printf("%s\n", ch);
//	//fprintf(pf, "%s\n", stdin);
//
//	//fclose(pf);
//	//pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double marks;
//};
//
//int main()
//{
//	struct S S_1 = { "zhangsan", 20, 88.5 };
//	struct S S_2 = { 0 };
// 	char ZS[30] = { 0 };
//
//	int c = sprintf(ZS, "%s %d %.1lf", S_1.name, S_1.age, S_1.marks);
//	printf("%s\n", ZS);
//
//	int m = sscanf(ZS, "%s %d %lf", S_2.name, &(S_2.age), &(S_2.marks));
//	printf("%s %d %lf", S_2.name, S_2.age, S_2.marks);
//}


int main()
{
	FILE* pf = fopen("data_1.txt", "w");
	if (pf == NULL)
	{
		perror("fopen:");
		return 1;
	}

	//1.Write 26 alphbats in file:
	for (int i = 0; i < 26; i++)
	{
		fputc('a' + i, pf);
	}


	//2.Read the file
	FILE* PF = fopen("data_1.txt", "r");
	if (PF == NULL)
	{
		perror("fopen:");
		return 1;
	}

	//Get the length of data_1.txt
	int len = ftell(pf);

	fflush(pf);//Refreshing the pf doesn't change the pf!!!
	
	//for (int i = 0; i < 26; i++)
	//{
	//	fputc('a' + i, pf);
	//}

	//fseek(PF, 0, SEEK_END);
	//int len = ftell(PF);
	//rewind(PF);

	for (int i = 0; i < len; i++)
	{
		int Chr = fgetc(PF);
		printf("%c\n", Chr);
	}


	//if (ferror(PF))
	//{
	//	printf("I/O error when reading");
	//}
	//else if (feof(PF))
	//{
	//	printf("End of file reached successfully");
	//}

	//Close files
	fclose(PF);
	fclose(pf);
	pf = NULL;
	PF = NULL;

	return 0;
}

