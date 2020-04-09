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
	string s, t;
	while (getline(cin, s))
	{
		getline(cin, t);
		for (const char& _s : s)
		{
			if (t.find(_s) == t.npos)
				cout << _s;
		}
		cout << endl;
	}
	return 0;
}

