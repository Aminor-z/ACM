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
pair<char, bool> charAdd(const char& a, const char& b)
{
	return (a - '0' + b - '0' > 9) ? pair<char, bool>(a + b - '0' - 10, true) : pair<char, bool>(a + b - '0', false);
}
string add(string a, string b)
{
	if (a.length() < b.length())swap(a, b);
	for (register int i = 0; i < b.length() - a.length(); ++i)
	{
		b = "0" + b;
	}
	register pair<char, bool> _charAdd;
	for (register int i = a.length() - 1; i >= 0; --i)
	{
		a[i] += _charAdd.second;
		_charAdd = charAdd(a[i], b[i]);
		a[i] = _charAdd.first;
	}
	if (_charAdd.second)
		a = "1" + a;
	return a;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string a, b;
	while (cin >> a >> b)
	{
		cout << add(a, b) << endl;
	}

	return 0;
}

