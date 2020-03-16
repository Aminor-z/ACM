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
	while (getline(cin, s))
	{		
		for (string::iterator iter = s.begin(); iter != s.end(); iter++)
		{
			if (*iter == ',' || *iter == '.')*iter = ' ';
		}
		stringstream ss(s);
		string t;
		int count=0;
		while (ss >> t)
		{
			count++;
		}
		cout << count << endl;
	}
	return 0;
}

