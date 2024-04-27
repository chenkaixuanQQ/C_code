#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <vector>
using namespace std;

//vector <int> vec;

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//		cout << vec[i];
//	}
//	cout << endl;
//
//	vec.insert(vec.begin() + 5, 9);
//
//	vec.erase(vec.begin() + 5);
//
//	for (i = 0; i < 10; i++)
//	{
//
//		cout << vec[i];
//	}
//
//	return 0;
//}

//map<string, bool>my_map;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        string put;
//        cin >> put;
//        if (!my_map.count(put))
//        {
//            my_map[put] = 1;
//        }
//        else
//        {
//            cout << put << endl;
//            return 0;
//        }
//
//    }
//    cout << "NO" << endl;
//
//    return 0;
//}


//queue<string> VIP;
//queue<string> NOR;
//
//
//
//int main()
//{
//    int M = 0;
//    cin >> M;
//
//    string put;
//    char cls;
//    string name;
//    
//
//    for (int i = 0; i < M; i++)
//    {
//        cin >> put ;
//        if (put == "OUT")
//        {
//            cin >> cls;
//            goto next;
//        }
//        else
//        {
//            cin >> name >> cls;
//        }
//
//        if (put == "IN")
//        {
//            if (cls == 'N')
//            {
//                NOR.push(name);
//            }
//            else
//            {
//                VIP.push(name);
//            }
//        }
//        else
//        {
//            next:
//            if (cls == 'N')
//            {
//                NOR.pop();
//            }
//            else
//            {
//                VIP.pop();
//            }
//        }
//    }
//    
//    int j = VIP.size();
//    for (int i = 0; i < j; i++)
//    {
//        cout << VIP.front() << endl;
//        VIP.pop();
//    }
//    j = NOR.size();
//
//    for (int i = 0; i < j; i++)
//    {
//        cout << NOR.front() << endl;
//        NOR.pop();
//    }
//
//
//    return 0;
//}

vector<int>vec;

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	//vec.erase(vec.begin() + 2);

	//for (i = 0; i < 9; i++)
	//{
	//	cout << vec.at(i);
	//}

	for (int i : vec)
	{
		cout << i << endl;
	}

	return 0;
}




//int main()
//{
//	set<int>s;
//	s.insert(1);
//	s.insert(3);
//	s.insert(2);
//	s.insert(18);
//	set<int> ::iterator it;
//	//for (it = s.begin(); it != s.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//	
//
//	//int j = 0;
//	//for (j = 0; j < 4; j++)
//	//{
//	//	cout << s[j];
//	//}
//
//	for (int c : s)
//	{
//		cout << c << endl;
//	}
//
//	return 0;
//}

