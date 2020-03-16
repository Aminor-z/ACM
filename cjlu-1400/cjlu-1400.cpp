#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		set<char> _set;
		string s;
		cin >> s;
		for (string::iterator iter = s.begin(); iter != s.end(); iter++)
		{
			_set.insert(*iter);
		}
		for (set<char>::iterator iter = _set.begin();iter != _set.end();iter++)
		{
			cout << *iter;
		}
		cout << endl;
	}
	return 0;
}

