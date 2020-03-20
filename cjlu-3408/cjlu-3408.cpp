//要死了这题………………………………
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
unsigned long long f[(int)1e3 + 10];
inline unsigned long long qpow(unsigned long long x, unsigned long long n)
{
	unsigned long long ans = 1, base = x;
	while (n != 0)
	{
		if (n & 1)
			ans *= base;
		base *= base;
		n >>= 1;
	}
	return ans;

}
inline void H4(const unsigned long long& n)
{
	f[n] = (unsigned long long)9e17;
	if (n < 63)
		for (register unsigned long long i = 1; i < n; i++)
		{

			f[n] = min(f[n], f[i] * 2 + qpow(2, n - i) - 1ll);
		}
	else
		for (register unsigned long long i = n >> 1; i < n; i++)
		{

			f[n] = min(f[n], f[i] * 2 + qpow(2, n - i) - 1ll);
		}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	memset(f, (unsigned long long)9e17, sizeof(f));
	f[0] = 0; f[1] = 1; f[2] = 3;
	for (register int i = 3; i <= 100; i++)
	{
		H4(i);
	}
	int op;
	while (cin >> op)
	{
		cout << f[op] << endl;
	}
	return 0;
}

