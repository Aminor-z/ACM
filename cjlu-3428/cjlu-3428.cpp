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
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	double a, b, c;
	cin >> a >> b >> c;
	double t = b * b - 4 * a * c;
	bool i = false;
	if (t < 0) {
		t = -t;
		i = true;
	}
	if (i)
	{
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", (-b / 2 )/ a+1e-9, (sqrt(t)/2)/a+1e-9, (-b / 2 )/ a+1e-9, abs((-sqrt(t)/2)/a)+1e-9);
	}
	else
	{
		if(t!=0)
		printf("x1=%.5lf;x2=%.5lf\n", ((-b+ sqrt(t))/2)/a+1e-9,((-b- sqrt(t))/2)/a+1e-9);
		else
			printf("x1=x2=%.5lf\n", (-b/2)/a+1e-9);
	}
	return 0;
}

