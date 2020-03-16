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
		int half = n/2;
		for (int i = 2; i <= half; i++)
		{
			if (isprime(i) && isprime(n - i)) {
				cout << i << " " << n - i << endl;
				break;
			}
		}
	}
	return 0;
}

