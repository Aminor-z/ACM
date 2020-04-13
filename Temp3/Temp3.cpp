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
struct projection {
    int x, y;
    projection() {}
    projection(int _x, int _y) {
        x = _x;
        y = _y;
    }
};
vector<int> y[201];
vector<int> z[201];
bool check(int n) {
    for (int i = 0; i < n; ++i) {
        if (y[i].size() > 0 && z[i].size() == 0) return false;
        if (y[i].size() == 0 && z[i].size() > 0) return false;
    }
    return true;
}
int main() {
    int n, m, h;
    scanf("%d%d%d", &n, &m, &h);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            char ch;
            scanf(" %c", &ch);
            if (ch == '1') y[i].push_back(j);
        }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < h; ++j) {
            char ch;
            scanf(" %c", &ch);
            if (ch == '1') z[i].push_back(j);
        }
    if (!check(n)) {
        puts("-1");
        return 0;
    }
    int ans = 0;
    for (int x = 0; x < n; ++x) ans += y[x].size() * z[x].size();
    printf("%d\n", ans);
    for (int x = 0; x < n; ++x) {
        for (auto Y : y[x])
            for (auto Z : z[x]) {
                printf("%d %d %d\n", x, Y, Z);
            }
    }
    ans = 0;
    for (int x = 0; x < n; ++x) ans += max(y[x].size(), z[x].size());
    printf("%d\n", ans);
    for (int x = 0; x < n; ++x) {
        int len = max(y[x].size(), z[x].size());
        for (int i = len; i >= 1; --i) {
            printf("%d %d %d\n", x, y[x][max(0ull, y[x].size() - i)], z[x][max(0ull, z[x].size() - i)]);
        }
    }
}