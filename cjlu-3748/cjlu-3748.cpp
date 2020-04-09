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
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	string s, t;
	register int n;
	while (getline(cin, s)) {
		stringstream ss(s);
		ss >> n;
		while (n--)
		{
			getline(cin, s);
			getline(cin, t);
			bool flag[128];
			memset(flag, true, sizeof(flag));
			for (const char& _s : s)
			{
				if (flag[_s])flag[_s] = false, cout << _s;
			}
			for (const char& _t : t)
			{
				if (flag[_t])flag[_t] = false, cout << _t;
			}
			cout << endl;

		}
	}
	return 0;
}

