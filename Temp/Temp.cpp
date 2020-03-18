#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
inline long long f(const pair<long long, long long>& a, const pair<long long, long long>& b)
{
	return a.first * b.first + a.second * b.second;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n;
	register long long x, y;
	while (cin >> n)
	{
		register int limit_a, limit_b;
		cin >> limit_a >> limit_b;
		register pair<long long, long long> _p;
		vector<pair<long long, long long>> ab_11, ab_10, ab_01, ab_00;
		for (register int i = 0; i < limit_a; i++)
		{
			cin >> _p.first >> _p.second;
			switch ((_p.first > 0) << 1 + (_p.second) > 0)
			{
			case 0b11:
				ab_11.push_back(_p);
				break;
			case 0b10:
				ab_10.push_back(_p);
				break;
			case 0b01:
				ab_01.push_back(_p);
				break;
			case 0b00:
				ab_00.push_back(_p);
				break;
			}
		}
		for (register int i = 0; i < limit_b; i++)
		{
			cin >> _p.first >> _p.second;
			register long long _max = 0;
			switch ((_p.first > 0) << 1 + (_p.second) > 0)
			{
			case 0b11:
			case 0b10:
			case 0b01:
				for (const pair<long long, long long>& a : ab_11)
				{
					_max = max(_max, f(a, _p));
				}
				for (const pair<long long, long long>& a : ab_10)
				{
					_max = max(_max, f(a, _p));
				}
				for (const pair<long long, long long>& a : ab_01)
				{
					_max = max(_max, f(a, _p));
				}
				break;
			case 0b00:
				for (const pair<long long, long long>& a : ab_00)
				{
					_max = max(_max, f(a, _p));
				}
				break;
			}
			cout << _max << endl;
		}


	}
	return 0;
}

