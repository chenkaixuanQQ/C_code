#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include <vector>
#include<string>
using namespace std;

//#define N 59084709587505
//
//int one_num(int i)
//{
//	long long num = 0;
//	int count = 0;
//	for (num = i; num < N; num *= i, count++);
//	return count;
//}
//
//int two_num(int n,int m)
//{
//	long long mul = n * m;
//	int count = 0;
//	int i = 1;
//	int t = 1;
//	for (; mul < N;i++)
//	{
//		for (t = 1; mul < N;t++)
//		{
//			for (int j = 1; j < t; j++)
//			{
//				mul *= m;
//				count++;
//			}
//		}
//		mul = m * n;
//		for (int j = 1; j < i; j++)
//		{
//			mul *= n;
//		}
//	}
//	return count;
//}
//
//int thr_num()
//{
//	int count = 0;
//	int n = 3;
//	int m = 5;
//	int p = 7;
//	long long sum = n * m * p;
//	int i = 1;
//	int j = 1;
//	while (sum < N)
//	{
//		j = 1;
//		sum = n * m * p;
//		for (int h = 1; h < i; h++)
//		{
//			sum *= n;
//		}
//		while (sum < N)
//		{
//			sum = n * m * p;
//			for (int h = 1; h < i; h++)
//			{
//				sum *= n;
//			}
//			for (int h = 1; h < j; h++)
//			{
//				sum *= m;
//			}
//			while (sum < N)
//			{
//				sum *= p;
//				count++;
//			}
//
//			j++;
//			sum = n * m * p;
//			for (int h = 1; h < i; h++)
//			{
//				sum *= n;
//			}
//			for (int h = 1; h < j; h++)
//			{
//				sum *= m;
//			}
//		}
//		i++;
//	}
//
//
//	return count;
//}
//
//int main()
//{
//	int sum = 0;
//	sum = thr_num() + two_num(3,5) + two_num(3, 7)+ two_num(7, 5) + one_num(3) + one_num(5) + one_num(7) - 1;
//
//
//	cout << sum << endl;
//
//
//
//	return 0;
//}


//int main()
//{
//	string s = "bad";
//	sort(s.begin(), s.end());
//	do
//	{
//		cout << s << endl;
//
//	} while (next_permutation(s.begin(), s.end()));
//
//
//
//
//	return 0;
//}
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//
//    vector<string>vec;
//    for (int i = 0; i < N; i++)
//    {
//        string s;
//        cin >> s;
//        vec.push_back(s);
//    }
//
//    sort(vec.begin(), vec.end());
//
//    do
//    {
//        for (int i = 0; i < vec.size(); i++)
//        {
//            cout  << vec.at(i) << ' ';
//        }
//        cout << endl;
//
//    } while (next_permutation(vec.begin(), vec.end()));
//
//
//    return 0;
//}


//
//int main()
//{
//	int N = 0;
//	int M = 0;
//	int count = 0;
//	cin >> N >> M;
//
//	vector<int>arr;
//
//	for (int i = 1; i <= N; i++)
//	{
//		arr.push_back(i);
//	}
//
//	do
//	{
//		if(count != M)
//		{
//			count++;
//		}
//		else
//		{
//			for (int i = 0; i < arr.size(); i++)
//			{
//				cout << arr.at(i);
//			}
//			return 0;
//		}
//	} while (next_permutation(arr.begin(), arr.end()));
//
//	return 0;
//}



//int main()
//{
//    vector<int>Sor;
//    vector<string>name;
//    int N = 0;
//    cin >> N;
//    string s;
//
//    for (int i = 0; i < N; i++)
//    {
//        Sor.push_back(i);
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        cin >> s;
//        name.push_back(s);
//    }
//
//    do
//    {
//        for (int i = 0; i < N; i++)
//        {
//            cout << name.at(Sor[i]) << ' ';
//        }
//        cout << endl;
//
//
//    } while (next_permutation(Sor.begin(), Sor.end()));
//
//    return 0;
//}
//
//int fib_num[25] = { 0 };
//
//
//int fib(int n)
//{
//	static int count = 0;
//	count++;
//	cout << count << ' ';
//	if (n <= 2) return 1;
//	fib_num[n] = fib(n - 1) + fib(n - 2);
//	return fib_num[n];
//	
//}
//
//
//int main()
//{
//	fib_num[0] = 1;
//	fib_num[1] = 1;
//
//	int n = 0;
//	cin >> n;
//	
//	if (n < 2)
//	{
//		cout << 2 << endl;
//		return 0;
//	}
//
//	int ret = fib(n);
//
//	cout << endl << ret << endl;
//
//
//	return 0;
//}


int main()
{
	int arr[100] = { 0, 0, 1, 1 };

	int n = 0;
	cin >> n;
	int cpy = n;
	
	for (cpy = n; cpy; cpy--)
	{
		
		for (int i = cpy / 2; i; i--)
		{
			arr[cpy] += arr[i];
		}
	}


	cout << arr[n] << endl;

	return 0;
}