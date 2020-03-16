#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
inline int get_B(int n)
{
	int i = 0;
	for (; n > 0; n /= 10, i++);
	return  i;
}
inline int get_n(int n, int B)
{
	return (n / (int)pow(10, B - 1)) % 10;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int a,b,B,t,c;
	while (cin >> a >> b)
	{
		bool flag = false;
		c = a * b;
		if (c == 0)
		{
			cout << 0;
			continue;
		}
		B = get_B(c);
		for (int i = 1; i <= B; i++)
		{
			t = get_n(c, i);
			if (!flag)
			{
				if (t != 0) {
					flag = true;
					cout << t;
				}
			}
			else
			{
				cout << t;
			}
		}
		cout << endl;
	}
	return 0;
}

