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
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n, t, i;
	set<int> s;
	while (cin >> n)
	{
		s.clear();
		s.insert(0);
		for (i = 0; i < n; i++) {
			cin >> t;
			if (t < *s.rbegin()) {
				s.erase(s.upper_bound(t));
			}
			s.insert(t);
		}
		cout << s.size() - 1 << endl;
	}
	return 0;
}
