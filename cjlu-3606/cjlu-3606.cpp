#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
const int N = 1e6 + 10;
char s[N];
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	while (cin >> s)
	{
		int length = strlen(s);
		int _max=-1e9;
		int c = 0;
		int begin = 0;
		for (int i = 0; i < length; i++)
		{
			if (s[i] == 'B')c--;
			else if (s[i] == 'W')c++;
			if (c < 0)
			{
				c = 0;
				_max = max(_max, i-begin);
				begin = i+1;
			}
		}
		if (c >= 0)
		{
			_max = max(_max, length - begin);
		}
		cout << _max << endl;
	}
	return 0;
}

