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
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		vector<int> v(n);
		for (register int w = 0; w < n; w++)
		{
			cin >> v[w];
		}
		sort(v.begin(), v.end());
		do
		{
			cout << v[0];
			for (vector<int>::iterator iter = v.begin()+1; iter < v.end(); iter++)
			{
				cout << " " << *iter;
			}
			cout << endl;
		} while (next_permutation(v.begin(), v.end()));
	}

	return 0;
}

