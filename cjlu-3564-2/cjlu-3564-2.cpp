#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
//DFS超时hhh
vector<vector<int>> v;
int N;
inline unsigned long long DFS(const unsigned short & pos,const unsigned short & level,const unsigned long long &value)
{		
	if (level == N-1)return value;
	//左和右
	return max(DFS(pos, level + 1, value + v[level + 1][pos]), DFS(pos + 1, level + 1, value + v[level + 1][pos + 1]));
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int t;
	while (cin >> N)
	{
		v.clear();
		for (register int i = 0; i < N; i++)
		{
			vector<int> _v;
			for (register int j = 0; j <=i; j++)
			{
				cin >> t;
				_v.push_back(t);
			}
			v.push_back(_v);
		}
		cout << DFS(0, 0, v[0][0]) << endl;

		
	}
	return 0;
}

