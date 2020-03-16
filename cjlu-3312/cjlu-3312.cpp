#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int set;
	while (cin >> set)
	{
		if (set == -1)break;
		int* n = new int[set];
		for (int i = 0; i < set; i++)
			cin >> n[i];
		int op;
		while (cin >> op)
		{
			if (op == 0)break;
			cout << n[op - 1] << endl;
		}
	}
	return 0;
}

