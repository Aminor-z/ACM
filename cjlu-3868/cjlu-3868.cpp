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
	int n;
	while (cin >> n)
	{
		int p=0,t = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> t;
			p ^= t;
		}
		if (p == 0)
			cout << "Bob" << endl;
		else cout << "Alice" << endl;
	}
	return 0;
}

