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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n; register double l;
	while (cin >> n >> l)
	{
		vector<pair<int, int>> v(n);
		for (register int i = 0; i < n; ++i)
		{
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {return a.first < b.first; });
		register int end = 0, ans = 0, t;
		for (register int i = 0; i < n; ++i)
		{
			if (end < v[i].first)end = v[i].first;
			t = ceil(((double)(v[i].second - end)) / l);
			ans += t;
			end += t * l;
		}
		cout << ans << endl;
	}
	return 0;
}

