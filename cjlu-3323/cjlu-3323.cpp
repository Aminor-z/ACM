#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
const double EPS = 1e-11;

int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	double a, b, c;
	while (cin >> a >> b >> c) {
		if (a == 0)
		{
			if (c == 0)
			{
				if (b == 0)
					printf("everything is root\n");
				else
					printf("0.00\n");
				continue;
			}
			else
			{
				if (b == 0)
					printf("no root\n");
				else
					printf("%.2lf\n", -c / b + EPS);
				continue;
			}
		}
		double t = b * b - 4 * a * c;
		bool i = false;
		if (t < 0) {
			t = -t;
			i = true;
		}
		if (i)
		{
			printf("%.2lf-%.2lfi,%.2lf+%.2lfi\n", (-b / 2) / a + EPS, abs((sqrt(t) / 2) / a) + EPS, (-b / 2) / a + EPS, abs((-sqrt(t) / 2) / a) + EPS);
		}
		else
		{
			if (t != 0)
				printf("%.2lf,%.2lf\n", ((-b - sqrt(t)) / 2) / a + EPS, ((-b + sqrt(t)) / 2) / a + EPS);
			else
				printf("%.2lf\n", (-b / 2) / a + EPS);
		}


	}
	return 0;
}

