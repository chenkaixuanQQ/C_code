#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%I64d\n", &arr[0] - &arr[1]);
//
//	int a = 0x11223344;
//
//	char* ca = (char*)&a;
//	*ca = 0;
//
//	printf("%x", a);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char a[] = { 0 };
//    while (1)
//    {
//        int t = 0;
//        while (scanf("%s", a) != EOF) { // ע�� while ������ case
//            // 64 λ������� printf("%lld") to
//            int sz = sizeof(a) - 1;
//            int i = sz;
//            for (; i >= 0; i--)
//            {
//                int j = 0;
//                printf("%c", a[j]);
//                j++;
//            }
//            t++;
//
//        }
//    }
//
//    //scanf("%s", a);
//    //printf("%s\n", a);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    char a[100] = { 0 };
//    while (fgets(a,sizeof(a),stdin) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to
//        int sz = 0;
//        int i = 0;
//
//        for (i = 0; a[i] != '\0'; i++)
//        {
//            sz++;
//        }
//        
//        i = sz;
//        
//        for (; i >= 0; i--)
//        {
//            printf("%c", a[i]);
//        }
//
//
//    }
//    return 0;
//}

////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
//
//int main()
//{
//	//����һ���ַ�����
//	char* ch[100] = "ABCDEFGHI";
//	int sz = sizeof(ch) - 1;//�󳤶�
//
//	//����K
//	int k = 0;
//	printf("�������������������ַ���>");
//	scanf("%d", &k);
//
//	int i = 0;
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	char ch[] = "asdf";
//	printf("%d\n", strlen(ch));
//	return 0;
//}

