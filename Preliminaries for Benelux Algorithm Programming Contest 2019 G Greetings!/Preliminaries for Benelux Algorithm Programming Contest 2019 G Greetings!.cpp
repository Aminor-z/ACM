#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <stack>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string s;
	while (cin >> s)
	{
		string::iterator iter = s.begin();
		for (; iter != s.end(); iter++)
		{
			cout << *iter;
			if (*iter == 'e')cout << 'e';
		}
		cout << endl;
	}
	return 0;
}