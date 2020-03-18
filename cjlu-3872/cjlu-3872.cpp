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
inline unsigned long long Factorial(const unsigned long long& n, const unsigned long long& m, const unsigned long long& t)
{
	register unsigned long long f = 1;
	for (register unsigned long long i = n,j=2; i > m; i--)
	{
		f *= i;
		if (j <= t)
		{
			if (f % j == 0)
			{
				f /= j;
				j++;
			}
		}
	}
	return f;
}
inline unsigned long long Cn(const unsigned long long& m, const unsigned long long n)
{
	return Factorial(n, m, n - m);
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	unsigned long long n;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout << 1 << endl;
			continue;
		}
		else if (n == 1)
		{
			cout << 1 << " " << 1 << endl;
			continue;
		}
		vector<unsigned long long> v;
		register unsigned long long half = n / 2;
		for (register unsigned long long i = 1; i <= half; i++)
		{
			v.push_back(Cn(i,n));
		}
		cout << 1;
		for (const unsigned long long& t : v)
		{
			cout << " " << t;
		}
		if (n & 1)
		{
			for (vector<unsigned long long>::reverse_iterator iter = v.rbegin(); iter != v.rend(); iter++)
			{
				cout << " " << *iter;
			}
		}
		else
		{
			for (vector<unsigned long long>::reverse_iterator iter = v.rbegin()+1; iter != v.rend(); iter++)
			{
				cout << " " << *iter;
			}
		}
		cout <<" "<<1<< endl;
	}
	return 0;
}

