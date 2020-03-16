#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		string a, b, c;
		cin >> a >> b >> c;
		cout << "Gas Station #" << w << ":" << endl;
		cout << "   Input:  " << a << " " << b << " " << c << endl;
		if (a[0] == '-')a[0] = '2';
		if (a[1] == '-')a[1] = '0';
		if (a[2] == '-')a[2] = '0';
		if (b[2] == '-')
		{
			if (b.substr(0, 2) > a.substr(0, 2))
				b[2] = '0';
			else
				b[2] = a[2] + 1;
		}
		else if (b[1] == '-')
		{
			if (a[0] == b[0]) {
				if (a[2] < b[2])b[1] = a[1];
				else b[1] = a[1] + 1;
			}
			else
			{
				b[1] = '0';
			}

		}
		else 
		{
			if (b[0] == '-')
			{
				if (b.substr(1, 2) > a.substr(1, 2))b[0] = a[0];
				else
					b[0] = a[0] + 1;
			}
		}
		if (c[2] == '-')
		{
			if (b.substr(0,2) < c.substr(0,2))c[2] = '0';
			else
				c[2] = b[2] + 1;
		}
		else if (c[1] == '-')
		{
			if (b[0] < c[0])c[1] = '0';
			else
				if (b[2] < c[2])
					c[1] = b[1];
				else
				c[1] = b[1] + 1;
		}
		else if(c[0]=='-')
		{
			if (b.substr(1, 2) >= c.substr(1, 2))c[0] = b[0] + 1;
			else c[0] = b[0];
		}
		cout << "   Output: " << a << " " << b << " " << c << endl;
		cout << endl;
	}
	return 0;
}

