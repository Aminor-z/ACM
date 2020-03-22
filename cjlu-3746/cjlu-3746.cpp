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
	int x;
	cin >> x;
	for (int w = 0; w < x; w++)
	{
		string a, b;
		cin >> a >> b;
		int length = a.length(), count = 0;
		char s[200] = { 0 };
		bool flag = true, t[200] = { false };
		for (int i = 0; i < length; i++) {
			if (s[a[i]] == 0 && t[b[i]] == 0) {
				s[a[i]] = b[i];
				t[b[i]] = true;
				++count;
			}
			else if (s[a[i]] != (int)b[i]) {
				flag = false; break;
			}
		}
		if (flag) {
			if (count == 25) {
				for (int i = 'a'; i <= 'z'; i++) {
					if (s[i] == 0) {
						for (int j = 'a'; j <= 'z'; j++) {
							if (t[j] == 0) {
								s[i] = j;
								break;
							}
						}
						break;
					}
				}
			}
			for (int i = 'a'; i <= 'z'; i++) {
				if (s[i])
					printf("%c->%c\n", i, s[i]);

			}
		}
		else puts("Impossible");
	}
	return 0;

}
