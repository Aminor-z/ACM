#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
using namespace std;

bool check(int n)
{
	if (n==1)return false;
	else
	{
		if (!(n & 1))
			return check(n >>1);
		else if (n % 5 == 0)
			return check(n / 5);
		else 
			return true;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int x;
	cin >> x;
	for(int i=0;i<x;i++)
	{
		int n;
		cin >> n;
		if (check(n))
		{
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
	}
	return 0;
}

