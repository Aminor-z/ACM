#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
bool ID[100000];
int main() {
	register int N, k;
	while (cin >> N) {
		int id;
		memset(ID, false, sizeof(bool) * 100000);
		for (register int i = 0; i < N; i++) {
			cin >> k;
			if (k == 1) { cin >> id; continue; }
			for (int j = 0; j < k; j++)
			{
				cin >> id; ID[id] = true;
			}
		}
		cin >> k;
		vector<int> v;
		for (register int i = 0; i < k; i++) {
			cin >> id;
			if (!ID[id]) {
				v.push_back(id);
				ID[id] = true;
			}
		}
		int flag = true;
		if (v.empty()) { cout << "No one is handsome"; }
		else for (register int i = 0; i < v.size(); i++) {
			flag ? printf("%05d", v[i]), flag = false : printf(" %05d", v[i]);

		}
		cout << endl;
	}
	return 0;
}
