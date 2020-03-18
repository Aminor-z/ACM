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
char* words;
bool check(char _c)
{
	switch (_c)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return false;
	default:return true;
	}
}
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int amount = 0;
	cin >> amount;
	int p = 0;
	words = new char[10000];
	for (; p < amount; p++)
	{
		cin >> words;
		cout << words[0];
		for (int i = 1; words[i] != '\0'; i++)
		{
			if (check(words[i]))
				cout << words[i];
		}
		cout << endl;
	}
	return 0;
}
