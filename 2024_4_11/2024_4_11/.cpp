#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int N = 0;



void rebuit(int arr[11][11], int a, int j)
{
	int c = a + 1,b = j;
	for (int m = a + 1; m <= N; m++)//把列重置为1
	{
		arr[m][j] += 1;
	}
	arr[a + 1][j + 1] += 1;
	arr[a + 1][j - 1] += 1;
}

void re_rebuit(int arr[11][11], int a, int j)
{
	int c = a + 1, b = j + 1;
	for (int m = a + 1; m <= N; m++)//把列重置为1
	{
		arr[m][j] -= 1;
	}
	arr[a + 1][j + 1] -= 1;
	arr[a + 1][j - 1] -= 1;
}


void check(int arr[11][11], int a)
{
	int j = 1;
	for (j = 1; j <= N; j++)
	{
		if (arr[a][j] == -1)
		{
			re_rebuit(arr, a, j);
			return;
		}
	}
}



int DFS(int a)
{
	int count = 0;
	int arr[11][11] = { 0 };
	int j = 1;
	int fore_j = 0;
	while (a <= N)
	{
		for (j = 1; j <= N; j++)//1.找位置给皇后：
		{
			if (arr[a][j] == 0)
			{
				fore_j = j;
				arr[a][j] = -1;
				rebuit(arr, a, j);//重置
				a++;//进入下一行
				break;
			}
		}


		if (a == N + 1 && j <= N)
		{
			count++;
			for (int m = 1; m <= N; m++)
			{
				if (arr[a - 1][m] == 0)
				{
					count++;
				}
			}
			arr[a - 1][fore_j] = 0;
			a -= 2;
			check(arr, a);
		}


		else if (j > N)
		{
			a--;
			if (a == 0)
			{
				return count;
			}
			re_rebuit(arr, a, fore_j);
		}


	}


	return count;
}



int main()
{
	cin >> N;

	int ret = DFS(1);
	cout << ret << endl;
	return 0;
}
