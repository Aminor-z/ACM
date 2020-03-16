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
	int n,t;
	while (cin >> n)
	{
		if (n == 0)break;
		int c = 0;
		while (n > 1)
		{
			c++;
			if (n % 2)
			{
				cout << n << "*3+1=";
				n = n * 3 + 1;
				cout << n << endl;
				
			}
			else
			{
				cout << n << "/2=";
				n=n >>1;
				cout << n << endl;
			}
		}
		cout <<c<< " steps in total."<<endl;
	}

	return 0;
}

