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
	int n;
	while (cin >> n)
	{
		long long num[1000002];
		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}
		long long  s_nump[1000002];
		long long  rs_numa[1000002];
		rs_numa[n - 1] = num[n - 1];
		s_nump[0] = num[0] * num[0];
		for (int i = 1; i < n; i++)
		{
			s_nump[i] = s_nump[i - 1] + num[i] * num[i];
		}
		for (int i = n - 2; i >= 0; i--)
		{
			rs_numa[i] = rs_numa[i + 1] + num[i];
		}
		long long _max = 2e-9, t;
		for (int k = 0; k < n - 1; k++)
		{
			t = s_nump[k] * rs_numa[k + 1];
			if (t > _max)_max = t;
		}
		cout << _max << endl;
	}
}
