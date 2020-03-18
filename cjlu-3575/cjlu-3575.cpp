#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
struct _int
{
	int num = -1;
};
map<int, map<int, map<int, _int>>> m;
inline int func(int _a, int _b, int _c)
{
	if (_a <= 0 || _b <= 0 || _c <= 0)
		return 1;
	if (!(_a > _b || _a > _c)) if (_a < 20 && _b < 20 && _c < 20) {
		switch (_a)
		{
		case 1: return 2;
		case 2: return 4;
		case 3: return 8;
		case 4: return 16;
		case 5: return 32;
		case 6: return 64;
		case 7: return 128;
		case 8: return 256;
		case 9: return 512;
		case 10: return 1024;
		case 11: return 2048;
		case 12: return 4096;
		case 13: return 8192;
		case 14: return 16384;
		case 15: return 32768;
		case 16: return 65536;
		case 17: return 131072;
		case 18: return 262144;
		case 19: return 524288;
		default:return pow(2, _a);
		}

	}
	if (_a > 20 || _b > 20 || _c > 20)
		return 1048576;
	if (_a < _b && _b < _c) {
		if (m[_a][_b][_c].num != -1)return m[_a][_b][_c].num;
		m[_a][_b][_c].num = func(_a, _b, _c - 1) + func(_a, _b - 1, _c - 1) - func(_a, _b - 1, _c);
		return m[_a][_b][_c].num;
	}
	else {
		if (m[_a][_b][_c].num != -1)return m[_a][_b][_c].num;
		m[_a][_b][_c].num = func(_a - 1, _b, _c) + func(_a - 1, _b - 1, _c) + func(_a - 1, _b, _c - 1) - func(_a - 1, _b - 1, _c - 1);
		return m[_a][_b][_c].num;
	}
}
int main() {
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		if (a == -1 && b == -1 && c == -1)break;
		int t = func(a, b, c);
		printf("w(%d, %d, %d) = %d\n", a, b, c, t);
	}
	return 0;
}