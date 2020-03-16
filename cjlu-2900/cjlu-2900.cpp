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
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n,w=1;
	while (cin >> n)
	{
		if (n == 0)break;
		double average=0;
		double t;
		int max = -2e9, min = 2e9;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			average += t/n;
			if (max < t)max = t;
			if (min > t)min = t;
		}
		printf("Case %d:", w++);
		printf("%d %d %.3lf\n", min, max, average);
	}
	return 0;
}

