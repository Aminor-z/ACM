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
const int limit = 1e3 + 10;
int DSU[limit];
inline int find(int n)
{
	while (true)
	{
		if (DSU[n] == -1)
		{
			return n;
		}
		n = DSU[n];

	}
}
inline void build(int n, int t)
{
	n = find(n);
	t = find(t);
	if (n != t)
	{
		DSU[n] = t;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n, m,a,b;
	while (cin >> n >> m)
	{
		if (n == 0)break;
		memset(DSU, -1, sizeof(DSU));
		for (register int i = 1; i <= m; i++)
		{
			cin >> a >> b;
			build(a, b);
		}
		register unsigned short ans = 0;
		set<int> _s;
		for (register int i = 1; i <= n; i++)
		{
			int t = find(DSU[i]);
			if (!_s.count(t)) {
				_s.insert(t);
			}
			if (DSU[i] == -1)
			{
				++ans;
			}
		}
		cout << ans-1 << endl;
	}
	return 0;
}

