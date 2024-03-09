#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





//int main()
//{
//	int a = 10;
//	float ad = 1.5;
//	int b = 0x12345678;
//
//
//	//32位大端上b的存储：
//	unsigned int a = 0x1234;//12 34
//	unsigned char b = *(unsigned char*)&a;//b = 0x12
//
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;// 00 00 00 C8
//	unsigned char b = 100;// 00 00 00 64
//	unsigned char c = 0;
//	c = a + b;//  2C
//	printf("%d %d", a + b, c);//C = 44, a + b = 300
//	return 0;
//}




//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;//a[999] = -1000 = 00 00 03 E8
//    }
//    printf("%d", strlen(a));
//    return 0;
//}


int main()
{
	//char a = -33;
	char a = 0b1000000000000000000000110000001;
	char b = -385;
	//         1111111111111111111111001011110  Inverse code
	//         1111111111111111111111001111111

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
