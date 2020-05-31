// cjlu-3397.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: a#pragma warning(disable:4996)
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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int T, n, t;
	while (cin >> T)
	{
		int remain[4] = { 0,0,0,0 };
		register int N = 1;
		vector<vector<queue<int>>> v(4);
		for (register int i = 1; i != 4; ++i)
		{
			v[i].resize(11);
		}
		string s;
		while (T--)
		{
			cin >> s;
			if (s == "IN")
			{
				cin >> n >> t;
				v[n][t].push(N++);
				++remain[n];
			}
			else
			{
				cin >> n;
				vector<queue<int>>::reverse_iterator iter = v[n].rbegin();
				bool flag = false;
				while (iter != v[n].rend())
				{
					if (!(iter->empty()))
					{
						cout << iter->front() << " " << --remain[n] << endl;
						iter->pop();
						flag = true;
						break;
					}
					++iter;
				}
				if (!flag)
				{
					cout << "EMPTY\n";
				}
			}
		}
	}
	return 0;
}


//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
