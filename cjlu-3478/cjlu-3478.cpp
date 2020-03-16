#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

inline double pow2(double n)
{
	return n * n;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	double sum=0;
	vector<double> a, b;
	for (int i = 0; i < n; i++)
	{
		double t;
		cin >> t;
		a.push_back(t);
	}
	for (int i = 0; i < n; i++)
	{
		double t;
		cin >> t;
		b.push_back(t);
	}
	for (vector<double>::iterator iter_a = a.begin(), iter_b = b.begin(); iter_a != a.end() && iter_b != b.end(); iter_a++, iter_b++)
	{
		sum += pow2(*iter_a - *iter_b);
	}
	printf("%.6lf\n", sqrt(sum));
	return 0;
}

