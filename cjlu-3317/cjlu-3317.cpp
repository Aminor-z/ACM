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

bool isprime(int num)
{
	int i, _sqrt;
	if (num == 2 || num == 3 || num == 5)return true;
	if (num % 6 != 1 && num % 6 != 5)
		return false;
	_sqrt = (int)sqrt(num);
	for (i = 5; i <= _sqrt; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;
	}
	return true;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		bool _find = false;
		for (int i = n-!(n&1); i >0; i-=2)
		{
			if (isprime(i))
			{
				if (_find)
				{
					cout << i << " " << i + 2 << endl;
					break;
				}
				else
				{
					_find = true;
				}
			}
			else
			{
				_find = false;
			}
		}
	}
	return 0;
}

