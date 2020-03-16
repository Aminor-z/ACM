#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int amount;
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		int set = 0,a=0,b=0,input=0;
		cin >> set;
		for (int c = 0; c < set; c++)
		{
			cin >> input;
			switch (input)
			{
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				a++; b++; break;
			case 4:
				a--; b--; break;
			}
		}

		if (a > b)
			cout << "Kobayashi" << endl;
		if (a == b)
			cout << "Draw" << endl;
		if (a < b)
			cout << "Tohru" << endl;
	}
	return 0;
}

