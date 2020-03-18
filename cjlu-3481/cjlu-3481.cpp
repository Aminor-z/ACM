//这都能超时……
//这个方法优化到头了
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
vector<int>* m = new vector<int>[100001];
vector<int> v;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n, s, t, _t;
	while (cin >> n >> s)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> t >> _t;
			m[t].push_back(_t);
			sort(m[t].begin(), m[t].end());
			m[_t].push_back(t);
			sort(m[_t].begin(), m[_t].end());
		}
		int num;
		for (int w = 0; w < s; w++)
		{
			cin >> num;
			v.clear();
			vector<int> ::iterator iter = v.begin();
			bool flag = false;
			for (int i = 0; i < num && !flag; i++)
			{
				cin >> t;
				v.push_back(t);
				for (iter = v.begin(); iter != v.end(); iter++)
				{
					if (binary_search(m[t].begin(), m[t].end(), *iter)) {
						flag = true;
						break;
					}
				}

			}
			if (flag)cout << "No" << endl;
			else cout << "Yes" << endl;
		}
	}
	return 0;
}

