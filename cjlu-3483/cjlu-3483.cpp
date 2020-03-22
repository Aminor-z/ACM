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
	string s;
	while (cin >> s)
	{
		sort(s.begin(), s.end());
		do
		{
			cout << s << endl;
		} while (next_permutation(s.begin(), s.end()));
	}

	return 0;
}

