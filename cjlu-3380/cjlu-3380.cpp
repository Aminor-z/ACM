#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
//向量指针
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int set;
	while (cin >> set)
	{
		for (int w = 0; w < set; w++) {
			int n, t;
			cin >> n;
			
			vector<int> v;
			for (int i = 0; i < n; i++) {
				cin >> t;
				v.push_back(t);
			}
			if (n == 1 || n == 2) { cout << "No" << endl; continue; }
			vector<int>::iterator toe = v.begin() + 1;
			vector<int>::reverse_iterator tob = v.rbegin() + 1;
			for (; toe != v.end(); toe++)
			{
				if (*(toe - 1) >= *toe) {
					toe--;
					break;
				}
			}
			for (; tob != v.rend(); tob++)
			{
				if (*(tob - 1) >= *tob) {
					tob--;
					break;
				}
			}
			if (toe == v.end()) {
				cout << "No" << endl; continue;
			}
			if (tob == v.rend()) {
				cout << "No" << endl; continue;
			}
			if (&*toe ==&*tob)
				cout << "Yes" << endl;
			else cout << "No" << endl;

		}
	}
	return 0;
}

