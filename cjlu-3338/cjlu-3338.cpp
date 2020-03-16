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
	int n1,n2;
	while (cin >> n1)
	{
		while (n1--)
		{
			vector<int> v;
			cin >> n2;
			int t;
			while (n2--)
			{
				cin >> t;
				v.push_back(t);
			}
			if (v.size() < 10 || v.size() >13)
			{
				cout << "No" << endl;
				continue;
			}
			sort(v.begin(), v.end());
			if(v[0]!=1||v[1]!=1)
			{
				cout << "No" << endl;
				continue;
			}
			int _max = *max_element(v.begin(), v.end());
			bool flag = true;
			for (int i = 1; i < v.size()&&flag; i++)
			{
				if(v[i-1]+2<v[i]&&v[i]!=_max)
				{
					flag = false;
					break;
				}
			}
			if (flag)cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
	return 0;
}

