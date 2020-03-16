#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
bool cmp(const char a, const char b)
{
	return a > b;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		for (int x = 1; x <= n; x++)
		{
			string a, b;
			cin >> a >> b;
			sort(a.begin(), a.end(), cmp);
			sort(b.begin(), b.end(), cmp);
			cout << "Data set #" << x << ": ";
			if (a < b)
			{
				cout << "First string is younger" << endl;
			}
			else if (a == b)
			{
				cout << "The two strings are the same age" << endl;
			}
			else
			{
				cout << "First string is older" << endl;
			}
			cout << endl;
		}
	}
	return 0;
}
