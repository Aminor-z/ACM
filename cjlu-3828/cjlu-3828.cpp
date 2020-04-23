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
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n, t;
	while (cin >> n)
	{
		map<int, stack<int>> m;
		vector<pair<int, int>> v;
		for (register int i = 1; i <= n; ++i)
		{
			cin >> t;
			if (m.count(t))
			{
				v.push_back({ m[t].top(),i });
				m[t].push(i);
			}
			else
				m[t].push(i);
		}
		sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b)->bool {
			return a.second < b.second;
			});
		vector < pair<int, int>> ans;
		ans.push_back({ 0,0 });
		for (register int i = 0; i < v.size(); ++i)
		{
			if (v[i].first > ans[ans.size() - 1].second)
				ans.push_back(v[i]);
		}
		if (ans.size() > 1)
		{
			cout << ans.size() - 1 << endl;
			ans[1].first = 1;
			ans[ans.size() - 1].second = n;
			for (register int i = 1; i < ans.size(); ++i)
			{
				cout << ans[i - 1].second + 1 << " " << ans[i].second << endl;
			}
		}
		else
		{

			if (v.size() > 0)
			{
				cout << 1 << endl;
				cout << 1 << " " << n << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}

	return 0;
}

