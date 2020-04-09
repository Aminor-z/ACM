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
	string s, t;
	while (getline(cin, s)) {
		bool flag[128];
		bool fail = false;
		memset(flag, false, sizeof(flag));
		for (const char& _s : s)
		{
			flag[_s] = true;
		}
		while (getline(cin, t) && !fail)
		{
			if (t == "#")break;
			for (const char& _t : t)
			{
				if (flag[_t])
				{
					fail = true;
					break;
				}
			}
			if (fail)break;
		}
		if (fail)
		{
			cout << "You fouled!!!\n";
			continue;
		}
		getline(cin, t);

		if (s == t)cout << "Your answer is correct!!!\n";
		else cout << "Your answer is wrong!!!\n";
	}
	return 0;
}

