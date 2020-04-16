﻿#pragma warning(disable:4996)
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
#define QWQ 32
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	set<string> _set;
	string s;
	while (getline(cin,s))
	{
		for (char& _s : s)
		{
			if (isalpha(_s)) { if (isupper(_s))_s+=QWQ; }
			else _s = ' ';
		}
		stringstream ss(s);
		while (ss >> s)_set.insert(s);
	}
	for (const string& _s : _set)
	{
		cout << _s << endl;
	}

	return 0;
}

