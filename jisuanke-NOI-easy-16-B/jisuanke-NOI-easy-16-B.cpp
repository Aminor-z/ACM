#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	cin >> n;
	long long count = 0;
	for (long long x = 0; x < n; x++)
	{
		long long op;
		cin >> op;
		long long a;
		switch (op)
		{
		case 1:
			
			cin >> a;
			count += a << 1;
			cin >> a;
			count += a << 1;
			break;
		case 2:
			cin >> a;
			count += a << 2;
			break;
		case 3:
			cin >> a;
			count += a;
			cin >> a;
			count += a;
			cin >> a;
			count += a;
			break;
		}
	}
	cout << count << endl;
	return 0;
}

