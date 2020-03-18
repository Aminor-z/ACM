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
bool is_5[100000] = { false,false };
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int i = 0;
	register long a = 1, b = 1, c = 2;
	bool flag = 0;
	for (i = 3; i < 100000; i++)
	{
		c = (a + b) % 10;
		if (c % 5 == 0) { is_5[i] = true; }
		a = b;
		b = c;
	}
	int x;
	while (cin >> x)
	{
		if (is_5[x + 1])
			cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}