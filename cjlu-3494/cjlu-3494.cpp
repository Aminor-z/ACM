#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

vector<int> v;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	v.push_back(-1);
	v.push_back(1);
	v.push_back(1);
	for (int i = 3; i < 22;i++)
	{
		v.push_back(v[i - 2] + v[i - 1]);
	}
	int n;
	cin >> n;
	while (n--)
	{
		int t;
		cin >> t;
		cout << v[t] << endl;
	}
	return 0;
}

