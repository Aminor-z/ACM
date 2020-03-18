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
vector<string> v;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		v.clear();
		string t;
		for (int i = 0; i < n; i++) {
			cin >> t;
			v.push_back(t);
		}
		stack<long long> _stack;
		int need_push = 0, need_pull = 0, div = 1;
		_stack.push(0);
		for (vector<string>::iterator iter = v.begin(); iter != v.end(); iter++)
		{
			if (*iter == "(")
			{
				div++;
				if (div & 1)
					_stack.push(0);
				else
					_stack.push(1);

			}
			else if (*iter == ")")
			{
				long long t = _stack.top();
				_stack.pop();
				div--;
				if (div & 1)
				{
					_stack.top() += t;
				}
				else
				{
					_stack.top() *= t;
				}
				_stack.top() %= 1000000007;

			}
			else
			{
				if (div & 1)
				{
					_stack.top() += atoll(iter->c_str());
				}
				else
				{
					_stack.top() *= atoll(iter->c_str());
				}
				_stack.top() %= 1000000007;
			}

		}
		std::cout << _stack.top() % 1000000007 << endl;
	}
	return 0;
}
