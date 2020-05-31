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
	queue<int> q;
	register int n, t;
	while (cin >> n && n != 0)
	{
		queue<int> q, des;
		for (register int i = 0; i < n; ++i)
		{
			cin >> t;
			q.push(t);
		}
		for (register int i = 0; i < n; ++i)
		{
			cin >> t;
			des.push(t);
		}
		stack<int> s;
		bool flag = true;
		while (!des.empty())
		{
			if (!s.empty())
			{
				while (!s.empty() && s.top() == des.front())
				{
					s.pop();
					des.pop();
				}
				if (!s.empty() && s.top() != des.front())
				{
					if (q.empty()) {
						flag = false;
						break;
					}
				}
			}
			if (!q.empty())
			{
				if (q.front() == des.front())
				{
					q.pop();
					des.pop();
				}
				else
				{
					s.push(q.front());
					q.pop();
				}
			}
		}
		if (flag)cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}

