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

int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	long long n;
	char c;
	string s = " fedabc";
	while (~scanf("%lld%c", &n, &c))
	{
		cout << (long long)(n - 1ll) / 4ll * 4ll + (long long)!(n & 1ll) + (n - 1ll) / 4ll * 12ll + (long long)(!((n % 4ll) & 1ll)) * 6ll + (long long)s.find(c) << endl;
	}
	return 0;
}

