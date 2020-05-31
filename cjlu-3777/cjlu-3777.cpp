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
	while (cin >> m >> n >> k)
	{
		while (k--) {
			vector<int> v(n + 1);
			for (register int i = 1; i <= n; ++i)
			{
				cin >> v[i];
			}
			bool flag = true;
			stack<int> s;
			register int  now = 1;
			for (int j = 1; j <= n; j++) {
				s.push(j);
				if (s.size() > m)
				{
					flag = false;
					break;
				}
				while (!s.empty() && s.top() == v[now])
				{
					s.pop();
					now++;
				}
			}
			if (now < n + 1)flag = false;
			if (flag)cout << "Yes\n";
			else
				cout << "No\n";
		}
	}
	return 0;
}

