#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <stack>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	while (cin >> n)
	{
		long long _sqrt = sqrt(n) + 1;
		bool flag = true;
		for (long long i = 1; i <= _sqrt; i++)
		{
			if (n % i == 0)
			{
				if ((n / i & 1) && (i & 1) || (!(n / i & 1) && !(i & 1))) {
					cout << ((i + n / i) >> 1) << " " << (abs(i - n / i) >> 1) << endl;
					flag = false;
					break;
				}

			}
		}
		if (flag)cout << "impossible" << endl;
	}
}
