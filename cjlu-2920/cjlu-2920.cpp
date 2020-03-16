#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n, l;
	while (cin >> n >> l)
	{
		if (n & 1)
		{
			if (l & 1)
			{
				cout << min(l,n-l) << endl;
			}
			else
			{
				cout << "Impossible" << endl;
			}
		}
		else
		{
			if (l & 1)
			{
				cout << l << endl;
			}
			else
			{
				cout << n - l << endl;
			}
		}
	}
		
	return 0;
}

