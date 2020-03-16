#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
using namespace std;


int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n, c = 0;
	char* s = new char[110];
	cin >> n;
	cin.getline(s, 110);
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		s = new char[110];
		cin.getline(s, 110);
		string t = "";
		for (int j = 0; j < strlen(s); j++)
		{
			if (s[j] == ' ')
				c++;
			else
				t += s[j];
		}
		v.push_back(t);
	}
	cout << c << endl;
	for (vector<string>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}

