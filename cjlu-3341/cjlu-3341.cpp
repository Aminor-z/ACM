#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int fastPow(int n, int t)
{
	return (t > 1) ? n * n * fastPow(n, t - 2) : 1;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n >= 0)
		{
			cout << "+";
			for (int i = 31; i >= 0; i--) {
				cout << (int)(1 & n >> i);
				if (!(i % 4))
				{
					(i != 0) ? cout << " " : cout << endl;;
				}
			}
		}
		else
		{
			cout << "-";
			int t = fastPow(2, 31);
			n = -n / 2;
			for (int i = 31; i > 0; i--) {
				int x = (n / t) % 2;
				t /= 2;
				cout << x;
				if (!(i % 4))
				{
					cout << " ";
				}
			}
			cout << n % 2 << endl;
		}


	}
	return 0;
}

