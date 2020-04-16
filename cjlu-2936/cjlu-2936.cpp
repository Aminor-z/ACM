#pragma warning(disable:4996)
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
#include <deque>
#include <bitset>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n, i = 0;
	string s, t;
	vector<string> v;
	bitset<10010> b = 0;
	map<string, int> m;
	while (cin >> s && s != "#")
	{
		v.push_back(s);
		t.resize(s.length());
		transform(s.begin(), s.end(), t.begin(), ::toupper);
		sort(t.begin(), t.end());
		if (m[t])
		{
			b[i] = true;
			b[m[t]] = true;
		}
		else {
			m[t] = i;
		}
		++i;
	}
	m.clear();
	vector<string> _v;
	for (register int i = 0; i < v.size(); ++i)
	{
		if (!b[i])_v.push_back(v[i]);
	}
	sort(_v.begin(), _v.end());
	for (const string& _s : _v)
	{
		cout << _s << endl;
	}
	return 0;
}
