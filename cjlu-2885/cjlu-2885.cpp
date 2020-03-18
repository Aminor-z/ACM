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
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		string s;
		cin >> s;
		int length = s.length();
		bool inner = false;
		bool match_word = false;
		int word_begin = 0;
		int word = 0;
		int max_length = 0;
		for (int i = 0; i < length; i++)
		{
			if (s[i] == '(') { inner = true; }
			else if (s[i] == ')') { inner = false; word_begin = i+1;
			}
			if (isalpha(s[i]))
			{
				if (inner)
				{
					if (!match_word)
					{
						word++;
					}
				}
				else
				if (!match_word)word_begin = i;
				match_word = true;
			}
			else
			{
				if (match_word)
				{
				if (!inner||s[i]=='(')
					{
						max_length = max(max_length, i - word_begin);
					}
					match_word = false;
				}
				
			}
		}
		if (match_word)max_length = max(max_length, (int)s.length() - word_begin);
		cout << max_length << " " << word << endl;
		
		


	}
	return 0;
}

