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
	long long n, m, q;
	while (cin >> n >> m)
	{
		vector<int> v(m + 2), df(m + 2);
		v[0] = 0;
		cin >> q;
		for (register int i = 1; i <= m; ++i)
		{
			cin >> v[i];
		}

		v[m + 1] = n + 1;
		sort(v.begin(), v.end());
		adjacent_difference(v.begin(), v.end(), df.begin());
		register int t;
		for (register int i = 0; i < q; ++i)
		{
			cin >> t;
			if (binary_search(v.begin(), v.end(), t))
			{
				cout << 0 << endl;
				continue;
			}
			cout << df[upper_bound(v.begin(), v.end(), t) - v.begin()] - 1 << endl;
		}
	}

	return 0;
}

