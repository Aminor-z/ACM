﻿#pragma warning(disable:4996)
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
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int a[3];
	while (cin >> a[0] >> a[1] >> a[2])
	{
		sort(a, a+3);
		cout << a[2] - a[0] << endl;
	}
	return 0;
}

