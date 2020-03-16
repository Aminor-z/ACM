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
	int n;
	while (cin >> n)
	{
		int set = 1;
		for (int x = 0; x < n; x++) {
			int i = 0;
			int num[3];
			for (int i = 0; i < 3; i++)
			{
				cin >> num[i];
			}
			cout << "Data set #" << set++ << ":" << endl;
			cout << "   Original order:" << " " << num[0] << " " << num[1] << " " << num[2] << endl;
			sort(num, num + 3);
			cout << "   Smallest to largest:" << " " << num[0] << " " << num[1] << " " << num[2] << endl;
			cout << endl;
		}
	}
	return 0;
}

