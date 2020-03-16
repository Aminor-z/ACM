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
	int N, M;
	while (cin >> N >> M) {
		int n[4000], i = 1;
		for (; i <= N; i++)
		{
			cin >> n[((i + M) % N == 0) ? N : (i + M) % N];
		}
		for (i = 1; i < N; i++)
		{
			cout << n[i] << " ";
		}
		cout << n[N] << endl;
	}
	return 0;
}

