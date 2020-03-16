#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
using namespace std;
const long long limit = 1e9;
vector<long long> v;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int set;
	cin >> set;
	for (int x = 1; (x * x + x) / 2 <=limit; x++)
	{
		v.push_back((x * x + x) / 2);
	}
	for (int w = 0; w < set; w++)
	{
		long long a, b;
		cin >> a >> b;
		if (a == b) {
			cout << 0 << endl; continue;
		}
		long long c = abs(a - b);
		long long n = upper_bound(v.begin(), v.end(), c) - v.begin();//直接是序列，坐标应-1
		cout<< min(abs(c-v[n-1])*2+n,abs(c-v[n])*2+n+1) << endl;
		
	}
	return 0;
}

