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
using namespace std;
//这题建系是↑y
//         ↑         x
//         0→→→→→→→→→
//吐了，第一次做的时候上下反了反
vector<vector<bool>> v;
bool** DFS_MEET;
pair<int, int> _begin, _end;
string s;
bool DFS(const int& x, const int& y)
{
	if (DFS_MEET[x][y])return false;
	DFS_MEET[x][y] = true;
	if (v[x][y])
	{
		if (x == _end.first && y == _end.second)return true;
		if (DFS(x, y - 1)) {
			//cout << "<--(" << x - 1 << "," << y - 1 << ")";
			//s = "U"+s;
			return true;
		}
		if (DFS(x + 1, y))
		{
			//cout << "<--(" << x - 1 << "," << y - 1 << ")";
			//s = "R"+s;
			return true;
		}
		if (DFS(x, y + 1)) {
			//cout << "<--(" << x - 1 << "," << y - 1 << ")";
			//s = "D"+s;
			return true;
		}
		if (DFS(x - 1, y)) {
			//cout << "<--(" << x - 1 << "," << y - 1 << ")";
			//s = "L"+s;
			return true;
		}

	}
	else
		return false;
}
int main()
{
	int n;
	while (cin >> n) {
		s.clear();
		v.clear();
		register int t;
		DFS_MEET = new bool* [n + 2];
		for (register int i = 0; i < n + 2; i++)
		{
			DFS_MEET[i] = new bool[n + 2];
			memset(DFS_MEET[i], false, sizeof(DFS_MEET[i]));
		}
		//建图+围墙
		v.resize(n + 2);
		v[0] = vector<bool>(n + 2);
		for (int i = 1; i <= n; i++)
		{
			vector<bool> _v(n + 2);
			_v[0] = false;
			for (int j = 1; j <= n; j++)
			{
				cin >> t;
				_v[j] = (bool)t;
			}
			_v[n + 1] = false;
			v[i] = _v;
		}
		v[n + 1] = vector<bool>(n + 2);
		//↑建图结束
		cin >> _begin.first >> _begin.second >> _end.first >> _end.second;
		++_begin.first;
		++_begin.second;
		++_end.first;
		++_end.second;
		if (_begin.first == _end.first && _begin.second == _end.second)
		{
			cout << "YES" << endl;
			continue;
		}
		if (DFS(_begin.first, _begin.second))
		{
			//cout << s << endl;
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}