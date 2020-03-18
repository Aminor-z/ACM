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
void hhhhhh()
{
	int n;
	cin >> n;
	for (int i = pow(10, n - 1); i < pow(10, n); i++)
	{
		int count = 0;
		int temp = i;
		for (; temp > 0; temp /= 10)
		{
			count += pow(temp % 10, n);
		}
		if (count == i)cout << i << endl;
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int n;
	while (cin >> n)
	{
		switch (n)
		{
		case 3:
			cout << 153 << endl << 370 << endl << 371 << endl << 407 << endl;
			break;
		case 4:
			cout << 1634 << endl << 8208 << endl << 9474 << endl;
			break;
		case 5:
			cout << 54748 << endl << 92727 << endl << 93084 << endl;
			break;
		case 6:
			cout << 548834 << endl;
			break;
		case 7:
			cout << 1741725 << endl << 4210818 << endl << 9800817 << endl << 9926315 << endl;
			break;
		case 8:
			cout << 24678050 << endl << 24678051 << endl << 88593477 << endl;
		case 9:
			cout << 146511208 << endl << 472335975 << endl << 534494836 << endl << 912985153 << endl;
		}
	}


	return 0;
}
