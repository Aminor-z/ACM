#pragma warning(disable:4996)
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	bitset<16> a;
	register int t,flag=0;
	cin >> t;
	a = t;
	unsigned long long w=a.to_ullong();
	printf("%o\n", w);
	printf("%X\n", w);
	return 0;
}

