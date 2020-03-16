#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << "Game #" << w << ":" << endl;
		cout << "   The input words are " << s1 << " and " << s2 << "." << endl;
		string::reverse_iterator t1, t2;
		t1 = s1.rbegin(); t2 = s2.rbegin();
		for (; t1 != s1.rend()-1 && t2 != s2.rend()-1; t1++, t2++)
		{
			if (*t1 != *t2)
			{
				break;
			}
		}
		string r1, r2;
		r1=s1.substr(0, s1.rend() - t1);
		r2=s2.substr(0, s2.rend()-t2);
		cout << "   The words entered in the notebook are " << r1 << " and " << r2 << "." << endl;
		cout << endl;
	}
	return 0;
}

