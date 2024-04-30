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
//        while (scanf("%s", a) != EOF) { // 注意 while 处理多个 case
//            // 64 位输出请用 printf("%lld") to
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
//    while (fgets(a,sizeof(a),stdin) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to
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

////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//
//int main()
//{
//	//创建一个字符数组
//	char* ch[100] = "ABCDEFGHI";
//	int sz = sizeof(ch) - 1;//求长度
//
//	//输入K
//	int k = 0;
//	printf("请输入您想左旋几个字符：>");
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

