#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	printf("Prequisite scenario:\n");
	printf("It was too boring,so I didn't know how to kill the time.Then, answered some questions to let me happy!\n");
	printf("In winter vacation,did you study hard ? (Please answer honestly)\n");
	printf("You can use 'YES' or 'NO' to answer the question please:");
	char answer[10] = { 0 };
	scanf("%s", answer);

	if (strcmp(answer, "YES") == 0)
	{
		printf("You have a really nice vocation.Do you want to share that with us?\n");
		printf("Please use 'YES' or 'NO' to answer the question:");
		scanf("%s", answer);
		if (strcmp(answer, "YES") == 0)
		{
			printf("Congratulations!Now,you can show your thought or your action in the screen!");
			char thought[1000] = { 0 };
			getchar();
			if(fgets(thought, sizeof(thought), stdin) != NULL);
			 printf("%s\n", thought);
		}
	}
	return 0;
}



//int main()
//{
//    char str[100]; // 创建一个足够大的字符数组来存储输入的字符串  
//
//    // 提示用户输入一个字符串  
//    printf("请输入一个字符串（可以包含空格）：");
//
//    // 使用fgets函数读取用户输入的一行文本并存储在str数组中  
//    if (fgets(str, sizeof(str), stdin) != NULL) {
//        // 如果读取成功，打印输入的字符串  
//        printf("你输入的字符串是：%s", str);
//    }
//    else {
//        // 如果读取失败（例如遇到文件结束符EOF），打印错误信息  
//        perror("fgets");
//    }
//
//    return 0;
//}


//int main()
//{
//	char ch[100] = { 0 };
//	fgets(ch, sizeof(ch), stdin);
//	printf("%s\n", ch);
//	return 0;
//}


