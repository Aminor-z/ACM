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
	long long v[100002];
	long long n, p, t;
	while (cin >> n >> p) {
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v, v+n);
		int max = 0;
		for (int x=0; x <n;x++) {
			int c = 0;
			long long pos = upper_bound(v, v+n, v[x] * p)-v;
			c = pos-x;
			if (c > max)max = c;
			if (pos == n)break;
		}
		cout << max << endl;
	}
	return 0;
}

