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
	int n;
	while (cin >> n)
	{
		if (n <= 6)
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
		else
		{
			switch (n)
			{
			case 7:
				cout << 1741725 << endl << 4210818 << endl << 9800817 << endl << 9926315 << endl;
				break;
			case 8:
				cout << 24678050 << endl << 24678051 << endl << 88593477 << endl;
			case 9:
				cout << 146511208 << endl << 472335975 << endl << 534494836 << endl << 912985153 << endl;
			}
		}
	}

	return 0;
}
