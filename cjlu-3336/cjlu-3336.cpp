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
#include <bitset>
using namespace std;
const int LIMIT = 1500 << 3;
inline string summon(const int& n,const int&num)
{
	switch (n%100)
	{
	case 11:
		return "The " + to_string(n) + "th ugly number is " + to_string(num) + ".\n";
	case 12:
		return "The " + to_string(n) + "th ugly number is " + to_string(num) + ".\n";
	case 13:
		return "The " + to_string(n) + "th ugly number is " + to_string(num) + ".\n";
	default:
		switch (n % 10)
		{
		case 1:
			return "The " + to_string(n) + "st ugly number is " + to_string(num) + ".\n";
		case 2:
			return "The " + to_string(n) + "nd ugly number is " + to_string(num) + ".\n";
		case 3:
			return "The " + to_string(n) + "rd ugly number is " + to_string(num) + ".\n";
		default:
			return "The " + to_string(n) + "th ugly number is " + to_string(num) + ".\n";
		}
	}
	
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register long long a, b, c;
	priority_queue<long long, vector<long long>, greater<long long> > q;
	vector<long long> v;
	v.push_back(0);
	v.push_back(1);
	q.push(1);
	while (v.size() < LIMIT)
	{
		a = q.top() << 1;
		b = a + q.top();
		c = a + b;
		q.pop();
		if (a % 5 != 0 && a % 3 != 0)
		{
			q.push(a);
			v.push_back(a);
		}
		if (b % 5 != 0)
		{
			q.push(b);
			v.push_back(b);
		}
		q.push(c);
		v.push_back(c);

	}
	sort(v.begin(), v.end());
	register int op = 0;
	while (cin >> op && op != -1)
	{
		cout << summon(op, v[op]);
	}
	return 0;
}

