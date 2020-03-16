#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
int getNumWidth(int n)
{
	if (n == 0)return 0;
	int i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return i;
}
using namespace std;
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		for (int w = 1; w <= n; w++) {
			int set = 1, i = 0;
			int x;
			cin >> x;
			int d = 0, a, b;
			int num[10000];
			memset(num, 0, sizeof(int) * 10000);
			for (i = 0; i < x; i++)
			{
				cin >> a >> b;
				num[a] += b;
			}
			printf("Prime Factorization #%d:\n", w);
			vector<int> v1, v2;
			vector<int> v3, v4;

			for (i = 0; i < 10000; i++)
			{
				if (num[i] != 0)
				{
					v1.push_back(i);//下
					v2.push_back(num[i]);//上
					v3.push_back(getNumWidth(i));
					v4.push_back(getNumWidth(num[i]));
				}
			}
			int l1 = 0, l2 = 0;
			for (i = 0; i < v2.size(); i++)
			{
				for (int j = 0; j < v3[i]; j++)
				{
					cout << " ";
				}
				cout << v2[i];
			}
			cout << endl;
			for (i = 0; i < v1.size(); i++)
			{
				cout << v1[i];
				for (int j = 0; j < v4[i]; j++)
				{
					cout << " ";
				}
				
			}

			cout << endl << endl;
		}
	}

	return 0;
}

