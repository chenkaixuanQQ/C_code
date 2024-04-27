#define _CRT_SECURE_NO_WARNINGS 1
#include<string> 
#include <iostream>
#include <vector>
using namespace std;



//int main()
//{
//	vector<int>arr;
//
//	arr.push_back(1);
//	arr.push_back(2);
//	arr.push_back(3);
//	arr.push_back(4);
//
//	arr.erase(arr.begin());
//	arr.erase(arr.begin());
//
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i];
//	}
//	return 0;
//}

 
//int main()
//{
//    // 请在此输入您的代码
//    int n = 0;
//    long long k = 0;
//
//    cin >> n >> k;
//
//    vector<long long>arr;
//
//    for (int i = 0; i < n; i++)
//    {
//        long long m = 0;
//        scanf("%lld", &m);
//        arr.push_back(m);
//    }
//
//    long long i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == i)
//        {
//            continue;
//        }
//
//
//        else if (arr[i] > i)
//        {
//            if (k >= arr[i] - i)
//            {
//                k -= arr[i] - i;
//                arr[i] = i;
//            }
//            else
//            {
//                cout << i;
//                return 0;
//            }
//        }
//
//        else
//        {
//            if (k >= i - arr[i])
//            {
//                k -= i - arr[i];
//                arr[i] = i;
//            }
//            else
//            {
//                cout << arr[i - 1] + 1;
//                return 0;
//            }
//        }
//    }
//
//    if (i == n)
//    {
//        cout << i ;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//    int n, k;
//    cin >> n >> k;
//    int a[200005];
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    sort(a, a + n);
//    for (int i = 0; i < n; i++)
//    {
//        if (k < abs(a[i] - i))
//        {
//            cout << i;
//            return 0;
//        }
//        k -= abs(a[i] - i);
//    }
//    cout << n;
//    return 0;
//}


//int x[15] = { 0 };
//int sum = 0, n = 0;
//
//
//bool check(int a)
//{
//	if (a > n)
//	{
//		sum++;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int PD(int k)
//{
//	for (int i = 1; i < k; i++)
//	{
//		if (abs(k - i) == abs(x[k] - x[i]))
//			return 0;
//		else if (x[k] == x[i])
//			return 0;
//	}
//	return 1;
//}
//
//
//void DFS(int a)
//{
//	if (check(a))
//	{
//		return;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			x[a] = i;
//			if (PD(a))
//				DFS(a + 1);
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n;//表示有几个皇后
//
//	DFS(1);
//
//
//
//	return 0;
//}


//int My_find(int N)
//{
//
//}
//
//
//int main()
//{
//	int N = 0;
//	cin >> N;
//
//	int ret = My_find(N);
//
//	cout << ret << endl;
//
//	return 0;
//}
//
//
//




//using namespace std;
//int main()
//{
//    // 请在此输入您的代
//    int i = 0;
//    vector<int>arr;
//
//    int n = 2022;
//
//    for (n = 2022; n > 0; n /= 16)
//    {
//        arr.push_back(n % 16);
//    }
//
//    for (i = arr.size() - 1; i > 0; i--)
//    {
//        if (arr[i] < 10)
//        {
//            for (; i >= 0; i--)
//            {
//                arr[i] = 10;
//            }
//            break;
//        }
//    }
//
//
//    int sum = 0;
//    int ret = 1;
//
//    for (i = 0; i < arr.size(); i++)
//    {
//        ret = arr[i] * int(pow(16, i));
//        sum += ret;
//    }
//
//    cout << sum << endl;
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//bool judge(int n)
//{
//    while (n)
//    {
//        int t = n % 16;
//        if (t < 10)
//        {
//            return false;
//        }
//        n /= 16;
//    }
//    return true;
//}
//int main()
//{
//    for (int i = 2023; ; i++)
//    {
//        if (judge(i))
//        {
//            cout << i;
//            return 0;
//        }
//    }
//}
//
//int My_find(int i)
//{
//	int arr[5] = { 0 };
//	int sum = i * 9;
//	int count = 0;
//	if(i == 2)
//	{
//		for (int j = 0; j <= sum; j++)
//		{
//			while (1)
//			{
//				if (arr[0] >= 10)
//				{
//					return count;
//				}
//				else if (arr[1] >= 10)
//				{
//					arr[0]++;
//					arr[1] = 0;
//					continue;
//				}
//				else if (arr[0] + arr[1] == j)
//				{
//					count++;
//					arr[0]++;
//					arr[1] = 0;
//				}
//				arr[1]++;
//
//			}
//		}
//	}
//
//	else if (i == 3)
//	{
//		for (int j = 0; j <= sum; j++)
//		{
//			while (1)
//			{
//				if (arr[0] >= 10)
//				{
//					return count;
//				}
//				else if (arr[1] >= 10)
//				{
//					arr[1] = 0;
//					arr[0]++;
//					continue;
//				}
//				else if (arr[2] >= 10)
//				{
//					arr[2] = 0;
//					arr[1]++;
//				}
//				else if (arr[0] + arr[1] + arr[2] == j)
//				{
//					count++;
//					arr[2] = 0;
//					arr[1]++;
//				}
//				arr[2]++;
//			}
//		}
//	}
//
//	else if (i == 4)
//	{
//		for (int j = 0; j <= sum; j++)
//		{
//			if (arr[0] >= 10)
//			{
//				return count;
//			}
//			else if (arr[1] >= 10)
//			{
//				arr[1] = 0;
//				arr[0]++;
//				continue;
//			}
//			else if (arr[2] >= 10)
//			{
//				arr[2] = 0;
//				arr[1]++;
//				continue;
//			}
//			else if (arr[3] >= 10)
//			{
//				arr[3] = 0;
//				arr[2]++;
//				continue;
//			}
//			else if (arr[0] + arr[1] + arr[2] + arr[3] == j)
//			{
//				arr[3] = 0;
//				arr[2]++;
//				continue;
//			}
//			arr[3]++;
//		}
//
//	}
//
//
//	return count;
//}
//
//
//int main()
//{
//	int ret = 10;
//	int count = ret * ret;
//	for (int i = 2; i <= 4; i++)
//	{
//		ret += My_find(i);
//		count += ret * ret;
//	}
//
//	cout << count << endl;
//
//	return 0;
//}

#include <iostream>
int a[5][50] = { 0 };//定义数组a[i][j] 表示i位数和为j，j最大为9*i； 
void num(int x) {
    int t = 0, sum = 0;//判断位数 
    while (x) {
        sum += x % 10;
        x /= 10; t++;
    }a[t][sum]++;

}
int main() {
    int count = 0;

    for (int i = 1; i <= 9999; i++) {
        num(i);
    }
    for (int i = 1; i <= 4; i++) {//左一半,1-4 
        for (int j = 1; j <= i * 9; j++) {
            for (int k = 1; k <= i; k++) {//右一半只要比i小前面补0
                count += a[i][j] * a[k][j];
            }
        }
    }printf("%d", count);
    return 0;
}