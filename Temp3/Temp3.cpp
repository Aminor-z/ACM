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
string decode = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
    register int i, c;
    while ((c = getchar()) != EOF) {
        for (i = 1; decode[i] && decode[i] != c; ++i);
        {
            if (c == '\n')continue;
            if (decode[i])
                putchar(decode[i - 1]);
            else putchar(c);
        }
    }
	return 0;
}

