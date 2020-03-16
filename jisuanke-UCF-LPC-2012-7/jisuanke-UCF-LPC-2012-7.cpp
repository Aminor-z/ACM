#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
char* charend;
char* t;
int rb = 0;
bool S();
bool T()
{
	if (rb < 0)return false;
	if (t > charend)return false;
	if (*t == 'c')return t++, S();
	else
		if (*t == 'a')
		{
			rb++;
			t++;
			if (T())
			{
				if (*t == 'b')
					return t++, rb--, S();
			}
			else
			{
				return false;
			}

		}
		else return t++, rb--, S();
}
bool S()
{
	if (rb < 0)return false;
	if (t > charend) return rb==0;
	if (*t == 'c') return t++, S();
	else
		if (*t == 'a')
		{
			rb++;
			t++;
			if (T())
			{
				if (*t == 'b')
					return t++,rb--, S();
			}
			else
			{
				return false;
			}
		}
		else return t++, rb--, S();
}
int main()
{
	int x;
	while (cin >> x)
	{
		
		for (int n = 1; n <= x; n++) {
			char* s = new char[10000];
			cin >> s;
			for (int i = 0; i < 10000; i++)
			{
				if (s[i] == '\0')
				{
					charend = s + i-1;
					break;
				}
			}
			rb = 0;
			t = s;
			printf("Pattern %d: ", n);
			if (S())
			{
				printf("More aliens!\n\n");
			}
			else
			{
				printf("Still Looking.\n\n");
			}
		}
	}
	return 0;
}

