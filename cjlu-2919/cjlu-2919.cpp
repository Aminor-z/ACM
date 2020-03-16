#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <sstream>
using namespace std;

set<string> _set;
vector<string> v;
int main()
{
	string s;
	while (cin >> s)
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (int i = 0; i < s.length(); i++)
		{
			if (!isalpha(s[i]))
				s[i] = ' ';
		}
		string st;
		stringstream ss(s);
		while (ss >> st)
			_set.insert(st);
	}
	
	set<string>::iterator iter;
	for (iter = _set.begin(); iter!= _set.end(); iter++)
	{
		cout << *iter << endl;
	}

	return 0;
}

