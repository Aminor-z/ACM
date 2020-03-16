#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

//解法1：sort
//解法2：字母出现次数
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int set;
	cin >> set;
	for (int w = 0; w < set; w++)
	{
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		string t;
		cin >> t;
		if (s.length() > t.length()) { cout << "NO" << endl; continue; }
		bool flag = false;
		for (int i = 0; i <= t.size() - s.size(); i++)
		{
			string _t = t.substr(i, s.length());
			sort(_t.begin(), _t.end());
			if (s.compare(_t) == 0)
			{
				flag = true;
				break;
			}
		}
		if (flag)cout << "YES" << endl;
		else cout << "NO" << endl;



	}
	return 0;
}

