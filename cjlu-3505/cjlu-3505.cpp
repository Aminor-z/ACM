#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
double y;
inline double f(double x)
{
	double x2 = x * x;
	double x3 = x2 * x;
	double x4 = x2 * x2;
	return 6.0*x4*x3 + 8.0 * x4*x2 + 7.0 * x3 + 5.0*x2 - y * x;
}
inline double fp(double x)
{
	double x2 = x * x;
	double x3 = x2 * x;
	return 42.0 * x3 * x3 + 48.0 * x3 * x2 + 21.0 * x2 + 10.0 * x - y;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	cin >> y;
	while (cin >> y)
	{
		double lowerbound = 0, upperbound = 100;
		double middle = 50;
		while (upperbound - lowerbound > 1e-6)
		{
			
			if (fp(middle) > 0)
			{
				upperbound = middle;
			}
			else
			{
				lowerbound = middle;
			}
			middle = lowerbound+(upperbound- lowerbound) / 2.0;
		}
		printf("%.4lf\n", f(middle));
	}
	return 0;
}

