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
struct fs
{
	unsigned long long fz, fm;
};
inline unsigned long long gcd(const unsigned long long& a, const unsigned long long& b)
{
	return b > 0 ? gcd(b, a % b) : a;
}
inline unsigned long long lcm(unsigned long long a, unsigned long long b) {
	return a * b / gcd(a, b);
}
inline fs gcd(const fs& a, const fs& b)
{
	fs t;
	t.fz = gcd(a.fz, b.fz);
	t.fm = lcm(a.fm, b.fm);
	return t;
}
inline fs lcm(const fs& a, const fs& b)
{
	fs t;
	t.fz = lcm(a.fz, b.fz);
	t.fm = gcd(a.fm, b.fm);
	return t;
}
inline void simplify(fs& a)
{
	unsigned long long _gcd = gcd(a.fz, a.fm);
	if (_gcd > 1)
	{
		a.fz /= _gcd;
		a.fm /= _gcd;
	}
}
int main()
{
	int n;
	cin >> n;
	register fs a, b, _gcd, _lcm;
	for (int w = 0; w < n; w++)
	{
		cin >> a.fz >> a.fm >> b.fz >> b.fm;
		simplify(a);
		simplify(b);
		_gcd = gcd(a, b);
		_lcm = lcm(a, b);
		simplify(_gcd);
		simplify(_lcm);
		cout << _gcd.fz << "/" << _gcd.fm << " " << _lcm.fz << "/" << _lcm.fm << endl;

	}
	return 0;
}