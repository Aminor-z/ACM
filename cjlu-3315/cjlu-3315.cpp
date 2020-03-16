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
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (n == -1)break;
		vector<double> v;
		for (int i = 0; i < n; i++)
		{
			double t;
			cin >> t;
			v.push_back(t);
		}
		double x;
		while (cin >> x) {
			if (x == 0)break;
			double _pow = 1;
			double sum = 0;
			for (int i = 0; i < n; i++)
			{
				sum += _pow * v[i];
				_pow *= x;
			}
			printf("%.1lf\n", sum);
		}
		
	}
	return 0;
}

