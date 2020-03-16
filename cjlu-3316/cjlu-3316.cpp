#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	while (cin >> n)
	{
		cout << n * (n + 1) / 2 << endl;
	}
	return 0;
}

