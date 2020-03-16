#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
const int INF = 1e9 + 1;
int a[26], dp[26];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[i] = INF;
        }
        for (int i = 0; i < n; i++)
        {
            int p = lower_bound(dp, dp + n, a[i]) - dp;
            dp[p] = a[i];
        }
        cout << lower_bound(dp, dp + n, INF) - dp << endl;
    }
    return 0;
}