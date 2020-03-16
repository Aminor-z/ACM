#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		int t = 0, sum = 0, cache = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> t;
			cache += t;
			sum += abs(cache);
		}
		cout << sum << endl;
	}

	return 0;
}

