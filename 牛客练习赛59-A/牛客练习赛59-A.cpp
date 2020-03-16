#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <stack>
using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	char* s = new char[1002];
	
	while (cin.getline(s, 1001))
	{
		int length = strlen(s);
		char* X = find(s, s + length, 'X'),*o=s+length;
		bool xiao=false, qiao=false, hui = false;
		if (X != s + length)
		{
			char* i = find(X, s + length, 'i');
			if (i != s + length)
			{
				char* a = find(i, s + length, 'a');
				if (a != s + length)
				{
					char* o = find(a, s + length, 'o');
					if (o != s + length)
					{
						xiao = true;
					}
				}
			}
		}
		//XaiaaoQiaaaoheHuuuiHuui
		if (xiao)
		{
			char* Q = find(o, s + length, 'Q');
			if (Q != s + length)
			{
				char* i = find(Q, s + length, 'i');
				if (i != s + length)
				{
					char* a = find(i, s + length, 'a');
					if (a != s + length)
					{
						char* o = find(a, s + length, 'o');
						if (o != s + length)
						{
							qiao = true;
						}
					}
				}
			}
			char* H = find(o, s + length, 'H');
			if (H != s + length)
			{
				char* u = find(H, s + length, 'u');
				if (u != s + length)
				{
					char* i = find(u, s + length, 'i');
					if (i != s + length)
					{
						char* _H = find(i, s + length, 'H');
						if (_H != s + length)
						{
							char* _u = find(_H, s + length, 'u');
							if (u != s + length)
							{
								char*_i = find(_u, s + length, 'i');
								if (_i != s + length)
								{
									hui = true;
								}
							}
						}
					}
				}
			}
			if (qiao && hui)cout << "Happy" << endl;
			else cout << "emm" << endl;
			
		}
		else {
			cout << "emm" << endl;
		}
	}
	return 0;
}

