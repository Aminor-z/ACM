#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
//小数第3位round没有处理，这题没过
const double pi = 3.14159;
int main()
{
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		double x, y,r;
		cin >> r >> x;
		y = r -x;
		double yin = (r * r - x * x + y * y) * pi / 2-4e-3;
		double yang = r * r * pi - yin-4e-3;
		printf("Taijitu #%d: yin %.2lf, yang %.2lf\n\n", w, yin, yang);
	}
	return 0;
}

