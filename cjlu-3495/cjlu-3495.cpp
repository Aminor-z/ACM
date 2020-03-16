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
	int x, y, z;
	while (cin >> x >> y >> z)
	{
		int n;
		for (n = 10; n < 101; n++) {
			if ((n % 3 == x) && (n % 5 == y) && (n % 7 == z)) {
				cout << n << endl;
				break;
			}
		}
		if (n == 101) cout<<"No answer"<<endl;
	}
	return 0;
}

