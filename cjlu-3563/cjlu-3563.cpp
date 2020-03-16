#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

//DP-01背包
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		int a[50];
		long long DP[51][2501];
		int sum=0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}
		if (sum & 1) {
			cout << 0 << endl;
			continue;
		}
		int half = sum / 2;
		//0-1
		memset(DP[0], 0, sizeof(int) * 2501);
		for (int i = 1; i <= n; i++)
		{
			DP[i][0] = 1;
		}
		for(int i=1;i<=n;i++)
			for (int j = 1; j <= half; j++)
			{
				if (j >= a[i - 1])
					DP[i][j] = DP[i - 1][j] + DP[i-1][j - a[i - 1]];
				else
					DP[i][j] = DP[i - 1][j];
			}
		cout << DP[n][half] << endl;
	}
	return 0;
}

