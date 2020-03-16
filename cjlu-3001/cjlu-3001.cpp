#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
struct Array
{
	int n = -1;
};
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	while (cin >> n)
	{
		int x = n, y = n,i,now=1;
		int limit = (n+1) / 2;
		Array a[101][101];//x,y
		for (int w = 0; w < limit; w++)
		{
			//R
			for (i = n - w; i > w; i--)
			{
				a[n - w][i].n = now++;
			}
			//D
			for (i = n - w-1; i > w; i--)
			{
				a[i][w+1].n = now++;
			}
			//L
			for (i = w+2; i < n-w; i++)
			{
				a[w+1][i].n = now++;
			}
			//U
			for (i = w+1; i <= n-w-1; i++)
			{
				a[i][n-w].n = now++;
			}
		}
		for (int z = n; z >= 1; z--)
		{
			for (int d = 1; d <n; d++)
			{
				cout << a[d][z].n<<" ";
			}
			cout << a[n][z].n<<endl;
		}
		cout << "";
	}

	return 0;
}

