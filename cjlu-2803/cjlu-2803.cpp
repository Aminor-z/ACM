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
bool isEnemy[200][200];
//并查集
int DSU[200] = { 0 };
inline int find(const int& x) {
	int t = x;
	while (1) {
		if (DSU[t] == 0) {
			return t;
		}
		t = DSU[t];
	}
	//	return r;
}
//不合并
//A
//|——|
//x  y
//合并
//x y ---------> x-y
inline void add(const int& n, const int& m) {
	int x = find(n);
	int y = find(m);
	if (x != y)
		DSU[x] = y;
}
int main() {
	register int n, m, k, a, b, _isEnemy;
	while (cin >> n >> m >> k)
	{
		memset(DSU, 0, sizeof(DSU));
		for (register int i = 0; i < 200; i++)
		{
			memset(isEnemy[i], false, sizeof(isEnemy[i]));
		}
		for (register int i = 0; i < m; i++) {
			cin >> a >> b >> _isEnemy;
			if (_isEnemy == 1) {
				add(a, b);
			}
			else {
				isEnemy[a][b] = true;
				isEnemy[b][a] = true;
			}
		}
		for (register int i = 0; i < k; i++) {
			cin >> a >> b;
			bool isSame = find(a) == find(b);
			if (isSame && !isEnemy[a][b]) {
				cout << "No problem\n";
			}
			else if (!isSame && !isEnemy[a][b]) {
				cout << "OK\n";
			}
			else if (isSame && isEnemy[a][b]) {
				cout << "OK but..." << endl;
			}

			else if (isEnemy[a][b] && !isSame) {
				cout << "No way\n";
			}
		}
	}
	return 0;
}
