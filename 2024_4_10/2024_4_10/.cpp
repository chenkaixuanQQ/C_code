#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>

using namespace std;


//


int main()
{
	vector<string>tian_gan;
	vector<string>di_zhi;

	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");
	tian_gan.push_back("��");

	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("î");
	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("δ");
	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("��");
	di_zhi.push_back("��");

	int start = 28;
	int year = 0;
	cin >> year;

	int i = 0;
	for (i = 0; 60 * i + start < year; i++);
	i--;

	int j = 0;
	for (j = 0; j * 10 < year - 60 * i - start; j++);
	j--;

	for (int n = 0; n < 12; n++)
	{
		if (year - 60 * i - start - j * 10 - n == 0)
		{
			cout << tian_gan[j] << di_zhi[n];
			return 0;
		}
	}

	return 0;
}