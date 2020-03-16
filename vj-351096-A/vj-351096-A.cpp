#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
int N;
vector<int>* DP;
void run_DP()
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (j == 0)
			{
				DP[i][j] += DP[i - 1][0];
			}
			else if (j == i)
			{
				DP[i][j] += DP[i - 1][i - 1];
			}
			else
			{
				DP[i][j] += max(DP[i - 1][j - 1], DP[i - 1][j]);
			}
		}
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int i, j, x, t;
	while (cin >> x)
	{
		for (int w = 0; w < x; w++) {
			cin >> N;
			DP = new vector<int>[N];
			for (i = 0; i < N; i++)
			{
				for (j = 0; j <= i; j++)
				{
					cin >> t;
					DP[i].push_back(t);
				}
			}
			if (N == 1)
			{
				cout << DP[0][0] << endl;
				continue;
			}
			run_DP();
			int _max = -1e6;
			for (i = 0; i < N; i++)
			{
				_max = max(_max, DP[N - 1][i]);
			}
			cout << _max << endl;
		}
	}
	return 0;
}

