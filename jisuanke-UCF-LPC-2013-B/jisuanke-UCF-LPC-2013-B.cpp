#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
struct pos
{
	pos(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int x;
	int y;
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int n;
	cin >> n;
	for (int w = 0; w < n; w++)
	{
		vector<pos> v;
		int t1, t2;
		int set;
		cin >> set;
		for (int i = 0; i < set; i++)
		{
			cin >> t1 >> t2;
			v.push_back(pos(t1, t2));
		}
		cout << "Test case #" << w+1 << ": ";
		if (set < 3) {
			cout << "0 triangle(s) can be formed." << endl<<endl; 
			continue;
		}
		else
		{
			int count = 0;
			vector<pos>::iterator iter1, iter2, iter3;
			for (iter1 = v.begin(); iter1 != v.end(); iter1++)
				for (iter2 = iter1 + 1; iter2 < v.end(); iter2++)
					for (iter3 = iter2 + 1; iter3 < v.end(); iter3++)
					{
						double a, b, c;
						a = sqrt((iter1->x - iter2->x) * (iter1->x - iter2->x) + (iter1->y - iter2->y) * (iter1->y - iter2->y));
						b = sqrt((iter2->x - iter3->x) * (iter2->x - iter3->x) + (iter2->y - iter3->y) * (iter2->y - iter3->y));
						c = sqrt((iter1->x - iter3->x) * (iter1->x - iter3->x) + (iter1->y - iter3->y) * (iter1->y - iter3->y));
						if (a + b > c+1e-7 && b + c > a+1e-7 && a + c > b+1e-7)
						{
							count++;
						}
					}
			cout << count << " triangle(s) can be formed."<<endl<<endl;
		}

	}
	return 0;
}

