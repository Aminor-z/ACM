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
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		int f[105];
		for (int x = 0; x <= 102; x++)
			f[x] = 0;
		int amount = 0;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			f[temp]++;
		}
		int now = 1;
		for (int j = 2; j <= 102; j++)
		{

			if (f[j] > 0)
			{
				amount += 5;
				amount += (j - now) * 5;
				amount += f[j];
				now = j;
			}
		}
		amount += (now - 1) * 4;
		amount += 5;
		cout << amount << endl;
	}
	return 0;
}