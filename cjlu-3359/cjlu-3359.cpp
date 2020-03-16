#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
//% 优先队列
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long set;
	cin >> set;
	for (long long x = 0; x < set; x++)
	{
		priority_queue<int, vector<int>, greater<int> > q;
		int n,t;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			q.push(t);
		}
		long long sum=0;
		while (q.size()>1)
		{
			int a, b;
			a = q.top();
			q.pop();
			b = q.top();
			q.pop();
			sum += a + b;
			q.push(a + b);
		}
		cout << sum << endl;
	}
	return 0;
}

