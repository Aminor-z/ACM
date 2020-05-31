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
	int m, n, k;
	while (cin >> n >> m >> k)
	{
		while (k--) {
			bool flag = true;
			stack<int> s;
			queue<int> q;
			register int t;
			for (register int i = 0; i < n; ++i)
			{
				cin >> t;
				q.push(t);
			}
			register int now = 1;
			while (!q.empty())
			{
				if (q.front() == now)
				{
					q.pop();
					++now;
				}
				else
				{
					s.push(q.front());
					q.pop();
					if (s.size() > m)
					{
						flag = false;
						break;
					}
				}
				while (!s.empty() && s.top() == now)
				{
					s.pop();
					++now;
				}

			}
			while (!s.empty() && s.top() == now)
			{
				s.pop();
				++now;
			}
			if (now != n + 1)flag = false;
			if (flag)cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}

