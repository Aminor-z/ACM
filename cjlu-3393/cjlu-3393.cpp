#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
struct Info
{
	int id;
	string name;
	int mark;
}info[1010];
bool cmp_1(const Info& a, const Info& b)
{
	return a.id < b.id;
}
bool cmp_2(const Info& a, const Info& b)
{
	return (a.name == b.name) ? a.id < b.id : a.name < b.name;
}
bool cmp_3(const Info& a, const Info& b)
{
	return (a.mark == b.mark) ? a.id < b.id : a.mark < b.mark;
}                                    
int main()
{
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(0);
	int set, n, c = 1;
	while (cin >> set >> n)
	{
		if (set == 0)break;
		for (int x = 0; x < set; x++)
		{
			cin >> info[x].id >> info[x].name >> info[x].mark;
		}
		switch (n)
		{
		case 1:
			sort(info, info + set,cmp_1);
			break;
		case 2:
			sort(info, info + set, cmp_2);
			break;
		case 3:
			sort(info, info + set,cmp_3);
			break;
		}
		printf("Case %d:\n", c++);
		for (int i = 0; i < set; i++)
		{
			
			printf("%06d ", info[i].id);
			cout  << info[i].name << " " << info[i].mark << endl;
		}
	}

	return 0;
}

