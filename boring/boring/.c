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
//    char str[100]; // ����һ���㹻����ַ��������洢������ַ���  
//
//    // ��ʾ�û�����һ���ַ���  
//    printf("������һ���ַ��������԰����ո񣩣�");
//
//    // ʹ��fgets������ȡ�û������һ���ı����洢��str������  
//    if (fgets(str, sizeof(str), stdin) != NULL) {
//        // �����ȡ�ɹ�����ӡ������ַ���  
//        printf("��������ַ����ǣ�%s", str);
//    }
//    else {
//        // �����ȡʧ�ܣ����������ļ�������EOF������ӡ������Ϣ  
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


