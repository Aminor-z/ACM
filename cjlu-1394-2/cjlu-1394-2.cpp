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
const int limit = 1e5 + 10;
int DP[limit] = {0,};
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n,t;
	while (cin >> n) {
		set<int> _set;
		int num;
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> t;
			_set.insert(t);
		}
		set<int> cb;
		for (set<int>::iterator a = _set.begin(); a != _set.end(); a++)
		{
			DP[*a] = 1;
			for (set<int>::iterator b = _set.end(); b != _set.end(); b++)
			{
				cb.insert(*a ** b);
			}
		}
		int t = 1;
		for (int i = 0; i < n; i++,t++)
		{
			for (set<int>::iterator a = _set.begin(); a != _set.end(); a++)
			{
				if (t & 1) {
					int pos = i + *a;
					if (DP[pos] == 1 || DP[pos] == -1)continue;
					else DP[pos] = 1;
				}
				else
				{
					int pos = i + *a;
					if(DP[pos]==0)
					DP[pos] = -1;
				}
			}
		}
		if (DP[n] == 1)
		{
			cout << "Victor" << endl;
		}
		else cout << "Jenny" << endl;
		
	}



}

