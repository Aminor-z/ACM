#pragma warning(disable:4996)
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>
#include <numeric>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
int v[500010];
int main()
{
    register int l,n,m,upperbound, middle, lowerbound, ans, now, cache, pos, i;
    while (cin>>l>>n>>m)
    {
        v[0] = 0;
        for (i = 1; i <= n; ++i)
        {
            cin >> v[i];
        }
        v[++n] = l;
        sort(v, v + 1 + n);
        lowerbound = ceil(l / (double)m);
        upperbound = l;
        ans = l;
        while (lowerbound <= upperbound)
        {
            pos = 0;
            middle = (lowerbound + upperbound) >>1;
            now = 0;
            for (i = 1; i <= m; ++i)
            {
                cache = now + middle;
                pos = lower_bound(&v[pos], v + 1 + n, cache) - v;
                if (v[pos] != cache)
                    if (pos == 1 || v[pos] == now)break;
                    else --pos;
                now = v[pos];
            }
            if (now != l)
                lowerbound = middle + 1;
            else if (now == l)
            {
                ans = min(ans, middle);
                upperbound = middle - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}