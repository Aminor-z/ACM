#pragma warning(disable:4996)
#include <algorithm>
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
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int l, r;
	priority_queue<long long, vector<long long>, greater<long long>> q;
	vector<long long> v;
	q.push(1);
	long long cache = -1;
	while (v.size() < 400)
	{
		if (q.top() == cache)
		{
			q.pop();
			continue;
		}
		cache = q.top();
		register long long a = q.top() << 1;
		if (a % 6 != 0)
		{
			q.push(a);
		}
		q.push(a + q.top());
		v.push_back(q.top());
		q.pop();
	}
	while (cin >> l >> r)
	{
		cout << upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l) << endl;
	}
	return 0;
}

