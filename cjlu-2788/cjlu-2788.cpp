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
		int r = 1, result = 0;
		for (int i = 1; i <= n; i++)
		{
			r *= i;
			result += r;
		}
		cout << result << endl;
	}
	return 0;
}