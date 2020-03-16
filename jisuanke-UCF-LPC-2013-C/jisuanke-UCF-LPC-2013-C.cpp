#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
string num = " 23456789TJQKA";
int get_num(char c)
{
	return find(num.begin(), num.end(), c) - num.begin();
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		string t;
		cin >> t;
		int value[15];
		memset(value, 0, sizeof(int) * 15);
		for (string::iterator iter = t.begin(); iter != t.end(); iter++)
		{
			value[get_num(*iter)]++;
		}
		cout << "UCF Hold-em #" << w << ": " << t << endl<<"Best possible hand: ";
		int *_max = max_element(value+1, value + 14);
		switch (*_max)
		{
		case 1:
			cout << "BUST" << endl;
			break;
		case 2:
			cout << "TWO OF A KIND" << endl;
			break;
		case 3:
			if (find(value, value + 14, 2) == value + 14)
			cout << "THREE OF A KIND" << endl;
			else
				cout << "FULL HOUSE" << endl;
			break;
		case 4:
			
				cout << "FOUR OF A KIND" << endl;

			break;
		}
		cout << endl;
	}
	return 0;
}

