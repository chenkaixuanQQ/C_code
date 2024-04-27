#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>

using namespace std;


//


int main()
{
	vector<string>tian_gan;
	vector<string>di_zhi;

	tian_gan.push_back("¼×");
	tian_gan.push_back("ÒÒ");
	tian_gan.push_back("±û");
	tian_gan.push_back("¶¡");
	tian_gan.push_back("Îì");
	tian_gan.push_back("¼º");
	tian_gan.push_back("¸ý");
	tian_gan.push_back("ÐÁ");
	tian_gan.push_back("ÈÉ");
	tian_gan.push_back("¹ï");

	di_zhi.push_back("×Ó");
	di_zhi.push_back("³ó");
	di_zhi.push_back("Òú");
	di_zhi.push_back("Ã®");
	di_zhi.push_back("³½");
	di_zhi.push_back("ËÈ");
	di_zhi.push_back("Îç");
	di_zhi.push_back("Î´");
	di_zhi.push_back("Éê");
	di_zhi.push_back("ÓÏ");
	di_zhi.push_back("Ðç");
	di_zhi.push_back("º¥");

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