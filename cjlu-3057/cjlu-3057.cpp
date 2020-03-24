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
inline bool cmp(const pair<string, unsigned int>& a, const pair<string, unsigned int>& b)
{
	if (a.second == b.second)return a.first < b.first;
	return a.second > b.second;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n;
	while (cin >> n)
	{
		if (n == 0)break;
		map<string, unsigned int> m;
		string s;
		for (register int i = 0; i < n; i++)
		{
			cin >> s;
			m[s]++;
		}
		vector<pair<string, unsigned int>> v;
		for (register map<string, unsigned int>::iterator iter = m.begin(); iter != m.end(); iter++)
		{
			v.push_back(pair<string, unsigned int>(iter->first, iter->second));
		}
		sort(v.begin(), v.end(), cmp);
		cout << v[0].first << " " << v[0].second << endl;
		if (v.size() > 1)
		{
			if (v[1].second == v[0].second)
			{
				cout << v[1].first << " " << v[1].second << endl;
			}
		}
	}

	return 0;
}

