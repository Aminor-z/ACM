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
	register char c;
	register unsigned int ans=0;
	register bool s0 = true;
	cin >> c;
	if (c == '0') { cout << 1 << endl;
	return 0;
	}
	while (cin >> c)
	{
		if (c == '0')
		{
			if (s0)
			{
				ans++;
				ans++;
				s0 = false;
			}
		}
		else
		{
			s0 = true;
		}
	}
	cout << ans;

	return 0;
}

