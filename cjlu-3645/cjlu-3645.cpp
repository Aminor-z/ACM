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
vector<string> v;
string _begin, _end;
struct Node
{
	Node() {}
	Node(const string& s)
	{
		this->s = s;
	}
	set<Node*> next;
	string s;
};
map<string, Node> m;
inline bool strMatch(string a, string b)
{
	bool flag = true;
	for (int i = 0; i < a.length(); i++)
	{
		if (flag)
		{
			if (a[i] != b[i])flag = false;
		}
		else
		{
			if (a[i] != b[i])return false;
		}
	}
	return true;
}
//建图
void build()
{
	for (vector<string>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		for (vector<string>::iterator _iter = iter + 1; _iter < v.end(); _iter++)
		{
			if (strMatch(*iter, *_iter))
			{
				m[*iter].next.insert(&m[*_iter]);
				m[*_iter].next.insert(&m[*iter]);
			}
		}
	}
}
map <Node*, bool> dfs_state;
unsigned short dfs(Node* source, unsigned short _n)
{
	//cout << source->s << endl;
	dfs_state[source] = true;
	unsigned short _min = 1e4;
	for (Node* t : m[source->s].next)
	{
		if (t->s == _end)
		{
			//	cout << source->s << "-->" << t->s << endl;
			//	cout << "I FIND" << endl;
			return _n + 1;
		}
		else
		{
			if (!dfs_state[&*t])
			{
				//	cout <<source->s<< "-->" << t->s << endl;
				_min = min(_min, dfs(&(*t), _n + 1));
			}
			//else return 1e4;
		}
	}
	dfs_state[source] = false;
	//cout << "======" << endl;
	return _min;
}
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	while (cin >> _begin >> _end)
	{
		v.clear();
		v.push_back(_begin);
		m[_begin] = Node(_begin);
		string t;
		getline(cin, t);
		getline(cin, t);
		stringstream ss(t);
		register int i = 0;
		while (ss >> t)
		{
			v.push_back(t);
			m[t] = Node(t);
			dfs_state[&m[t]] = false;
		}
		v.push_back(_end);
		m[_end] = Node(_end);
		build();
		cout << dfs(&m[_begin], 1) << endl;
	}

	return 0;
}

