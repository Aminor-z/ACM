#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	cin >> n;
	vector<long long> v1, v2;
	long long t;
	for (long long i = 0; i < n; i++)
	{
		cin >> t;
		v1.push_back(t);
		cin >> t;
		v2.push_back(t);
	}
	long long _max = -1,_t;
	for (vector<long long>::iterator iter1 = v1.begin(); iter1 != v1.end(); iter1++)
	{
		_t = 0;
		for (vector<long long>::iterator iter2 = v1.begin(), iter3 = v2.begin(); iter2 != v1.end() && iter3 != v2.end(); iter2++, iter3++)
		{

			if (*iter1 >= *iter2 && *iter1 <= *iter3)_t++;
			
		}
		if (_t > _max)_max = _t;
	}
	cout << _max << endl;
	return 0;
}
