//#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//vector<int> a = { 1, 2, 3, 4 };
//
//
//int main()
//{
//
//	int i = 0;
//	
//	for (i = 0; i < 20; i++)
//	{
//		a.push_back(i);
//	}
//	
//	a.erase(a.begin() + 3);
//
//	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << '\n';
//
//	return 0;
//}



vector<string> city;
vector<string> num[100];


int My_find(string s)
{
	int i = 0;
	for (i = 0; i < city.size(); i++)
	{
		if (city[i] == s)
		{
			return i;//若存在则返回城市序号
		}
	}
	return i;
}


int main()
{
	int n = 0;//一共输入n个数据
	printf("请输入总共订单数量：");
	cin >> n;
	//getchar();

	int i = 0;//输入i次：
	for (i = 0; i < n; i++)
	{
		string d, c;
		printf("请依次输入订单号及其所在城市：");
		cin >> d ;
		cin >> c;
		int ret = My_find(c);

		if (ret == city.size())
		{
			city.push_back(c);
			num[ret].push_back(d);
		}
		else
		{
			num[ret].push_back(d);
		}

	}

	for (i = 0; i < city.size(); i++)
	{
		cout << "订单城市：" << city[i] <<  "    订单数量：" << num[i].size() << endl;
		for (int j = 0; j < num[i].size(); j++)
		{
			cout << "订单号：" << num[i][j] << endl;
		}

	}
	return 0;
}


