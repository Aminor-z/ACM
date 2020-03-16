#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n,x;
	while (cin >> n>>x)
	{
		for (int t = 0; t < 9999; t++)
		{
			char c[5];
			sprintf(c, "%04d", n+t);
			string s = c;
			set<char> _set;
			for (string::iterator iter = s.begin(); iter != s.end(); iter++)
			{
				_set.insert(*iter);
			}
			if (_set.size() == x)
			{
				printf("%d %04d\n", t, n + t);
				break;
			}
		}


	}
	
	return 0;
}

