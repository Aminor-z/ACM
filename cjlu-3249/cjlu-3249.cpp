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
//为什么能这么难……………………
using namespace std;

//总马数、存在不同的名次数量，DP[n][1001]存储总数
unsigned long long DP[1010][1002];
void run_DP()
{
	DP[0][0] = 1;
	DP[1][1] = 1;
	DP[1][1001] = 1;
	for (register int i = 2; i <= 1000; i++)
	{
		register int sum = 0;
		//并列j马
		for (register int j = 1; j <= i; j++)
		{
			//前面一堆马看成一个整体，随便乱动
			//共i-1马的时候存在不同的名次数量j（新的这个马与前面某个并列）
			//共i-1马的时候存在不同的名次数量j（新的这个马不与任何马并列）
			//A
			//AB BA
			//C=AB OR BA=2
			//TC CT C_T_C=3*2
			//T=A OR B
			//XXY XYX YXX = 3*2   （x,y）互换emmmm
			//1           1
			//1 2         3
			//1 6 6       13  全并列、新马和前面其中一个马合成一堆乱动、三个马不结盟随便乱动
			//
			//不并列，一堆和新马错排，马可插入堆中
			DP[i][j] = DP[i - 1][j] * j % 1024;
			//并列一堆和（新马+并列马）错排，马可插入堆中
			DP[i][j] += DP[i - 1][j - 1] * j % 1024;
			DP[i][j] %= 1024;
			sum += DP[i][j];
			sum %= 1024;
		}
		DP[i][1001] = sum;
		//		cout << i << " " << sum << endl;
	}
}
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	run_DP();
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		int t;
		cin >> t;
		printf("Case %d: %d\n", w, DP[t][1001]);
	}
	return 0;
}

