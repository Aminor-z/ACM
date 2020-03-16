#pragma warning(disable:4996)
#include <iostream>
using namespace std;
inline int pow2(int n)
{
	return n * n;
}
inline int pow3(int n)
{
	return n * n * n;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int x,a,b,sum_odd,sum_even;
	while (cin >> x)
	{
		for (int w = 0; w < x; w++)
		{
			sum_odd = 0;
			sum_even = 0;
			cin >> a >> b;
			for (; a <= b; a++)
			{
				(a % 2)? sum_odd += pow2(a) : sum_even += pow3(a);
			}
			cout << sum_even << " " << sum_odd << endl;
		}
	}
	return 0;
}

