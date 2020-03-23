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
	int n;
	priority_queue<int, vector<int>,less<int>> q;
	while (getline(cin,s))
	{
		stringstream ss(s);
		if (s[0] == 'N')
		{
			cout << q.top() << endl;
			q.pop();
		}
		else
		{
			
			ss >> n;
			q.push(n);

		}
	}
	return 0;
}

