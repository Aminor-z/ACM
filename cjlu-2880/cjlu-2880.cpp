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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string s;
	register char now = 'a';
	while (cin >> s)
	{
		register unsigned long long ans = 0;
		for (char t : s)
		{
			if (t > now)
			{
				ans += min(t - now, 'z' - 'a' - t + now  + 1);
			}
			else
			{
				ans += min(now- t,'z' - 'a' -now+t+1);
			}
			now = t;
		}
		cout << ans << endl;
		now = 'a';
	}
	return 0;
}

