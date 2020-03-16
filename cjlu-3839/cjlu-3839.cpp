#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

long long f[41];
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	f[1] = 1;
	for (int i = 2; i <= 40; i++)
	{
		
		for (int j = 1; j < i; j++)
		{
			f[i] += (i - j) * f[j];
		}
	}
	int n;
	cin >> n;
	cout << f[n];
	return 0;
}

