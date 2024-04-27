#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <time.h>
using namespace std;




//int main()
//{
//	int n = 0;
//
//	for (int x = 30; ; x++)
//	{
//		n = x * x;
//		if (n > 9999)
//			break;
//		else if (n < 1000)
//			continue;
//		int aa = n / 100;
//		int bb = n % 100;
//		if (aa / 10 == aa % 10 && bb / 10 == bb % 10)
//			cout << aa << bb << endl;
//	}
//	return 0;
//}



//int main()
//{
//	long long n = 0;
//	int count = 0;
//	cin >> n;
//
//	while (n > 1)
//	{
//		if (n % 2 == 1)
//			n = 3 * n + 1;
//		else
//			n /= 2;
//		printf("%lld\n", n);
//		count++;
//	}
//
//	cout << count << endl;
//
//	return 0;
//}




//int main()
//{
//	long long  S = 0;
//	long long count = 1;
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		count *= i;//±íÊ¾iµÄ½×³Ë
//		S += count;
//	}
//
//	cout << S << endl;
//	cout << (double)clock() / CLOCKS_PER_SEC << endl;
//
//	return 0;
//}



int main()
{
	int m = 1;
	int n = (m++);

	cout << n << endl;




	return 0;
}
