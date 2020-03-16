#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
long long gcd(long long a, long long b)
{
	return a % b == 0 ? b : gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
	return a / gcd(a, b) * b;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n) {
		long long a, b;
		cin >> a >> b;
		long long muti = 1;
		long long _gcd = gcd(a, b);
		long long _lcm = lcm(a, b);
		for (int i = 2; i < n; i++)
		{
			long long t;
			cin >> t;
			_gcd = gcd(t, _gcd);
			_lcm = lcm(t, _lcm);
		}
		cout << _gcd << " " << _lcm << endl;
	}
	return 0;
}

