#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <stack>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int a, b;
	while (cin >> a >> b)
	{
		vector<int> va, vb;
		int t;
		for (int i = 0; i < a; i++)
		{
			cin >> t;
			va.push_back(t);
		}
		for (int i = 0; i < b; i++)
		{
			cin >> t;
			vb.push_back(t);
		}
		if (*max_element(va.begin(), va.end()) == *max_element(vb.begin(), vb.end()))
		{
			cout << "possible" << endl;
		}
		else
			cout << "impossible" << endl;
	}
}
