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
unsigned long long DP_q[36], DP_p[36];
//2 8 26
//n-1移到右柱(f(n-1))+n移到中间(1)+n-1移到左柱(f(n-1))+n移到右柱(1)+n-1移到右柱(f(n))
//f(n)=f(n-1)*3+2
inline void NH3_p(const unsigned short& n)
{
	DP_p[n] = 3 * DP_p[n - 1] + 2;
}
//分：x到中间，x到右边,x+1到中间,x到中间，x到左边，x+1到右边，x到中间，x到右边    和上面相同x(左→中→右=左→→右)
//总：n-1到中间(f(n-1))+(n移到中间(1)+n移到右柱(1))+n-1移到右柱(f(n))
inline void NH3_q(const unsigned short& n)
{
	DP_q[n] = DP_p[n - 1] + 2;
}
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	DP_p[0] = 2;
	DP_p[1] = 2;
	DP_q[1] = 2;
	for (register int i = 2; i < 33; i++)
	{
		NH3_p(i);
	}
	for (register int i = 2; i < 33; i++)
	{
		NH3_q(i);
	}
	int n;
	while (cin >> n)
	{
		if (n < 33)
			printf("%lld %lld\n", DP_p[n], DP_q[n]);
		else
		{
			switch (n)
			{
			case 33:
				printf("%s %s\n", "5559060566555522", "1853020188851842");
				break;
			case 34:
				printf("%s %s\n", "16677181699666568", "5559060566555524");
				break;
			case 35:
				printf("%s %s\n", "50031545098999706", "16677181699666570");
				break;
			}
		}
	}
	return 0;
}

