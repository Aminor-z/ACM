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
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n;
	cin >> n;
	map<string, string> m;
	string s, t;
	for (register int i = 0; i < n; i++)
	{
		cin >> s >> t >> t;
		m[s] = t;
	}
	cin >> n;
	for (register int w = 0; w < n; w++)
	{
		int num;
		cin >> num;
		vector<string> v;
		for (int i = 0; i < num; i++)
		{
			cin >> t;
			v.push_back(t);
		}
		for (string& s : v)
		{
			s = m[s];
		}
		for (vector<string>::iterator iter = v.begin(); iter != v.end() - 1; iter++)
		{
			cout << *iter << " ";
		}
		cout << *(v.end() - 1) << endl;
	}
	return 0;
}

