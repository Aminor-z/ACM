#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

long long f[31];
//这题3x0的矩形算一种...
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	memset(f, 0, sizeof(long long) * 31);
	f[2] = 3; f[4] = 11; f[0] = 1;
	for (int i = 6; i <= 30; i += 2)
		f[i] = 4 * f[i - 2]-f[i-4];
	long long n;
	while (cin >> n)
	{
		if (n == -1)break;
		cout << f[n] << endl;
	}
	return 0;
}

