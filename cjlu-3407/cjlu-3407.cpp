#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
inline long long fast_pow(int n, int _pow)
{
	return (_pow > 1) ? n * fast_pow(n, _pow - 1) : n;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n == 66)cout << "73786976294838206463" << endl;
		else if (n == 65)cout << "36893488147419103231" << endl;
		else if (n == 64)cout << "18446744073709551615" << endl;
		else
			cout << fast_pow(2, n) - 1ll << endl;

	}
	return 0;
}

