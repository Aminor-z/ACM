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

string j = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
inline int handle(const char&  _c)
{
	for (register int i = 0; i < 62; i++)
	{
		if (_c == j[i])return i;
	}
	return 0;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int need[62];
	register int shop[62];
	string a;//店主
	string b;//我
	register int i, j;
	while (cin >> a >> b)
	{
		register int still_need = 0, remind = 0;
		memset(need, 0, sizeof(need));
		memset(shop, 0, sizeof(shop));
		for (i = 0; i < a.length(); i++)
		{
			shop[handle(a[i])]++;
		}//店主
		for (i = 0; i < b.length(); i++)
		{
			need[handle(b[i])]++;
		}//我
		for (i = 0; i < 62; i++)
		{
			if (shop[i] < need[i])still_need += need[i] - shop[i];
			if (shop[i] > need[i])remind += shop[i] - need[i];
		}
		if (still_need > 0)
		{
			cout << "No " << still_need << endl;
		}
		else
		{
			cout << "Yes " << remind << endl;
		}
	}
	return 0;

}
