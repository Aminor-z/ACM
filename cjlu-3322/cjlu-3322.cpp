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

inline void H3(const unsigned short& n, const char& P1, const char& P2, const char& P3)
{
	if (n == 1)
	{
		printf("%c-->%c\n", P1, P3);
	}
	else
	{
		H3(n - 1, P1, P3, P2);
		printf("%c-->%c\n", P1, P3);
		H3(n - 1, P2, P1, P3);
	}
}
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n;
	while (cin >> n && n)
	{
		H3(n, 'A', 'B', 'C');
		cout << endl;
	}
	return 0;
}

