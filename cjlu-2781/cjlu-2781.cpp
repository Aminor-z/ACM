#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	while (cin >> n)
	{
		long long limit = sqrt(n)+10;
		long long _max=-1e9,begin=0,t;
		for (long long i = 2; i < limit; i++)
		{
			long long p = 1;
			for (long long j = i; j < limit && p < n; j++)
			{
				p *= j;
				t = j - i + 1;
				if (n % p == 0 && t > _max)
				{
					begin = i;
					_max = t;
				}
				
				
			}
		
		}
		if (begin == 0)
		{
			begin = n;
			_max = 1;
		}
		cout << _max << endl<<begin;
		for (long long i = begin+1; i <begin+ _max; i++)
		{
			cout << '*' << i ;
		}
		cout << endl;
	}
	return 0;
}

