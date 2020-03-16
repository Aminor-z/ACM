#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
short fsg[10001];
short n;
short vl;
short v[1000];
inline bool fakesg(int num) {
	if (fsg[num] != -1) {
		return fsg[num];
	}
	bool flag = true;
	for (int i=0; i<vl; i++)
	{
		if (n - v[i] < 0)return false;
		if (!fakesg(num-v[i])) {
			fsg[num] = true;
			flag = false;
		}
	}
	if(flag)
		fsg[num] = false;
	return fsg[num];

}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	while (cin >> n) {
		memset(fsg, -1, sizeof(fsg));
		short x,i=0;
		cin >> x;
		for (; i < x; i++)
		{
			short t;
			cin >> t;
			v[i] = t;
			fsg[t] = true;
			fsg[t<<1] = false;
		}
		vl = x;
		if (fakesg(n))cout << "Vector";
		else cout << "Jenny";
		cout << endl;
	}



}

