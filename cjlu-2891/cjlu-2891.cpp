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
		string s;
		cin >> s;
		for (string::iterator iter = s.begin(); iter != s.end(); iter++)
		{
			if (*iter == 'W')*iter = ' ';
		}
		stringstream ss(s);
		string t;
		vector<int> v;
		while (ss >> t)
		{
			v.push_back(t.length());
		}
		cout << v.size() << endl;
		if (v.size() > 0)
		{
		for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++)
		{
			cout << *iter << " ";
		}
		cout << endl;
			//cout << *(v.end() - 1) << endl;
		}
	}
	return 0;
}

