#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <map>
using namespace std;
using namespace std;
inline int Pow3(int &n)
{
	return n * n * n;
}
int p[110];
vector<int> v;
const int N= 1e6;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	for (int x = 1; x < 100; x++)
	{
		p[x] = Pow3(x);
	}
	while (cin >> n)
	{
		v.clear();
		if (n < 1729)continue;
		int j, k, l, m,t,w;
		for (int a = 1; a < 100; a++)
		{
			j = p[a];
			for (int b = a+1; b < 100; b++)
			{
				k = p[b];
				t = j + k;
				if (t > N)break;
				for (int c = 1; c < 100; c++)
				{
					l = p[c];
					if(b!=c)if(a!=c)
					for (int d = c+1; d < 100; d++)
					{
						m = p[d];
						w = l + m;
						if (w > N)break;
						else
						{
							if (b != d)if (a != d){
								if (t == w && t <= n)
								{
									if (std::find(v.begin(), v.end(), t) == v.end())
										v.push_back(t);
								}
							}
						}
					}
				}
			}
		}
		sort(v.begin(), v.end());
		int i = 0;
		for (; i < v.size()-1; i++)
		{
			cout << v[i] << " ";
		}
		cout << v[i] << endl;

	}
	return 0;
}

