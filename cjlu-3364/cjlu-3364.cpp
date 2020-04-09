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
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string s;
	bool odd = true;
	while (getline(cin, s)) {
		for (const char& t : s)
		{
			if (t == '"')
			{
				if (odd)odd = false, cout << "``";
				else odd = true, cout << "''";
			}
			else cout << t;
		}
		cout << endl;
	}
	return 0;
}

