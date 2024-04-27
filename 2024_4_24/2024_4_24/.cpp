#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;





int main()
{
	long long sum_n = 1;
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		sum_n *= i;
	}

	cout << sum_n << endl;


	return 0;
}
