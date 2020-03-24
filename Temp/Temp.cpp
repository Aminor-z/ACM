#pragma warning(disable:4996)
#include <b>
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

struct Node
{
	Node() {}
	Node(bool isGreat) { great = isGreat; }
	vector<int> next;
	double value = -1;
	bool great = false;
};
vector<Node> v;
int N;
double Z, R;
double ans = 0.0;
double dfs_1(const int& source, double value)
{
	double _ans = 0.0;
	if (v[source].great)
	{
		//cout << "Great:" << v[source].value * value << endl;
		return v[source].value * value;
	}
	else
	{
		for (int t : v[source].next)
		{
			//cout << source << "--->" << t << endl;
			_ans += dfs_1(t, value * R);
		}
	}
	return _ans;
}
void dfs_2(const int& source, double value)
{

	if (v[source].great)
	{
		//cout << "Great:" << v[source].value * value << endl;
		ans += v[source].value * value + 1e-7;
	}
	else
	{
		for (int t : v[source].next)
		{
			//cout << source << "--->" << t << endl;
			dfs_2(t, value * R);
		}
	}
}
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	while (cin >> N >> Z >> R)
	{
		R = 1 - R * 0.01;
		v.clear();
		v.resize(N);
		register unsigned long long n, t;
		for (register int w = 0; w < N; w++)
		{
			cin >> n;
			v[w] = Node();
			if (n > 0)
			{
				for (register int i = 0; i < n; i++)
				{
					cin >> t;
					v[w].next.push_back(t);
				}
			}
			else
			{
				v[w] = Node(true);
				cin >> t;
				v[w].value = t;
			}

		}
		if (N < 100000)
			cout << (long long)dfs_1(0, Z) << endl;
		else {
			dfs_2(0, Z);
			cout << (long long)(ans + 1e-5) << endl;
		}
	}

	return 0;
}

