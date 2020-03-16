#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

vector<long long> v;
int main() {
	long long l1, l2, t, m, pos = 0, n = -1;
	cin >> l1;
	for (int i = 0; i < l1; i++) {
		cin >> t;
		v.push_back(t);
	}
	v.push_back(-1e9);
	cin >> l2;
	m = (l1 + l2 + 1) / 2;
	for (int i = 0; i < l2; i++) {
		cin >> t;
		while (t >= v[pos] && m && pos < l1) {
			m--;
			pos++;
		}
		if (m == 0) {
			n = v[--pos];
			break;
		}
		m--;
		if (m == 0) {
			n = t;
			break;
		}
	}
	if (m) {
		while (m--) {
			v[pos++];
		}
		n = v[--pos];
	}
	cout << n << endl;
	return 0;
}

