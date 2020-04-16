#pragma warning(disable:4996)
#include <algorithm>
#include <iomanip>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
#include <bitset>
using namespace std;
struct info
{
	double get;
	double need;
	double value;
};
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	register int m, n, t;
	while (~scanf("%d%d", &m, &n) && n > 0)
	{
		vector<info> v(n);
		for (register int i = 0; i < n; ++i)
		{
			scanf("%lf%lf", &v[i].get, &v[i].need);
			v[i].value = (double)v[i].get / (double)v[i].need;
		}
		sort(v.begin(), v.end(), [](const info& a, const info& b) {return a.value > b.value; });
		register double ans = 0;
		for (register int i = 0; i < n; ++i)
		{
			if (m > v[i].need)
			{
				m -= v[i].need;
				ans += v[i].get;
			}
			else
			{
				ans += m * v[i].value;
				break;
			}
		}
		printf("%.3lf\n", ans);
	}
	return 0;
}

