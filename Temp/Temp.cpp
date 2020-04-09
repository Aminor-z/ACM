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
	int _n;
	cin >> _n;
	for (register int w = 1; w <= _n; w++)
	{
		int n;
		cin >> n;
		vector<pair<int, pair<int, int>>> v(n);
		register int c = 0;
		for (pair<int, pair<int, int>>& t : v)
		{
			cin >> t.second.first >> t.second.second;
			t.first = c++;
		}
		sort(v.begin(), v.end(), [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {return a.second.second < b.second.second; });
		int J_end = 0, C_end = 0;
		char* s = new char[n + 20];
		memset(s, '\0', sizeof(char) * (n + 20));
		for (const pair<int, pair<int, int>>& t : v)
		{
			if (C_end <= t.second.first)
			{
				s[t.first] = 'C';
				C_end = t.second.second;
			}
			else if (J_end <= t.second.first)
			{
				s[t.first] = 'J';
				J_end = t.second.second;
			}
			else {
				strcpy(s, "IMPOSSIBLE\0");
				break;
			}

		}
		std::cout << "Case #" << w << ": ";
		std::cout << s << endl;
	}
	return 0;
}

