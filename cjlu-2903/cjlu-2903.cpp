#pragma warning(disable:4996)
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
#include <bitset>
using namespace std;
inline string BlankFront5(string s)
{
	switch (s.length())
	{
	case 1:return "    " + s;
	case 2:return "   " + s;
	case 3:return "  " + s;
	case 4:return " " + s;
	case 5:return "" + s;
	}
}
inline string BlankFront4withBack1(string s)
{
	switch (s.length())
	{
	case 1:return "   " + s;
	case 2:return "  " + s;
	case 3:return " " + s;
	case 4:return "" + s;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string s;
	int T = 1;
	while (cin >> s)
	{
		bitset<10> b = 0;
		for (char& t : s)
		{
			b[t - '0'] = true;
		}
		cout << "CASE #" << T++ << endl;
		vector<int> v2, v3;
		for (register int i = 1; i < 10; ++i)
		{
			if (b[i])
			{
				for (register int j = 0; j < 10; ++j)
				{
					if (b[j])
					{
						for (register int k = 0; k < 10; ++k)
						{
							if (b[k])
								v3.push_back(i * 100 + j * 10 + k);
						}
					}
				}
			}
		}
		for (register int i = 1; i < 10; ++i)
		{
			if (b[i])
			{
				for (register int j = 0; j < 10; ++j)
				{
					if (b[j])
					{
						v2.push_back(i * 10 + j);
					}
				}
			}
		}
		int ans = 0;
		for (auto& _a : v3)
			for (auto& _b : v2)
			{
				s = to_string(_a * _b);
				bool flag = true;
				for (auto& _c : s)
				{
					if (!b[_c - '0']) { flag = false; break; }
				}
				if (!flag)continue;
				s = to_string(_a * (_b % 10));
				for (auto& _c : s)
				{
					if (!b[_c - '0']) { flag = false; break; }
				}
				if (!flag)continue;
				s = to_string(_a * (_b / 10));
				for (auto& _c : s)
				{
					if (!b[_c - '0']) { flag = false; break; }
				}
				if (!flag)continue;
				if (flag)
				{
					++ans;
					cout << '<' << ans << '>' << endl;
					cout << "  " << _a << endl;
					cout << "X  " << _b << endl;
					cout << "-----\n";
					cout << BlankFront5(to_string(_a * (_b % 10))) << endl;
					cout << BlankFront4withBack1(to_string(_a * (_b / 10))) << endl;
					cout << "-----\n";
					cout << BlankFront5(to_string(_a * _b)) << endl;

				}
			}
		cout << "the number of solutions=" << ans << endl;
	}
	return 0;
}

