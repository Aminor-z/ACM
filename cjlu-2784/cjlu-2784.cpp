#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
//第一个测试点过不了……
long long gcd(long long a, long long b)
{
	return a % b == 0 ? b : gcd(b, a % b);
}
class fs
{
public:
	fs(long long fz, long long fm)
	{
		this->fz = fz;
		this->fm = fm;
	}
	long long fz;
	long long fm;
	fs operator + (const fs& b)
	{
		return fs(this->fz * b.fm + this->fm * b.fz, this->fm * b.fm);
	}
};
int main()
{
    int n,i;
    while (cin >> n)
    {
        
        long long pre, _gcd;
        fs a(0,1), b(0,1);
        scanf("%lld/%lld", &a.fz, &a.fm);
        _gcd = (a.fz == 0 || a.fm == 0) ? 1 : gcd(abs(a.fz), abs(a.fm));
        a.fz /= _gcd;
        a.fm /= _gcd;
        for (i = 0; i < n-1; i++)
        {
            scanf("%lld/%lld", &b.fz, &b.fm);
            _gcd = (b.fz == 0 || b.fm == 0) ? 1 : gcd(abs(b.fz), abs(b.fm));
            b.fz /= _gcd;
            b.fm /= _gcd;
            a=a + b;
            _gcd = (a.fz == 0 || a.fm == 0) ? 1 : gcd(abs(a.fz), abs(a.fm));
            a.fz /= _gcd;
            a.fm /= _gcd;
        }
        pre = a.fz / a.fm;
        a.fz = a.fz % a.fm;
        if (a.fz != 0)
        {
            _gcd = (a.fz == 0 || a.fm == 0) ? 1 : gcd(abs(a.fz), abs(a.fm));
            a.fz /= _gcd;
            a.fm /= _gcd;
        }
        if (a.fz == 0) cout << pre << endl;
        else if (pre == 0) cout << a.fz << "/" << a.fm << endl;
        else cout << pre << " " << abs(a.fz) << "/" << abs(a.fm) << endl;

    }

    return 0;
}

