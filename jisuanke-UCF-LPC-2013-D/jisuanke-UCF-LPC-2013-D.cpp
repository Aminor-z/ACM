#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
struct info
{
	string n1;
	string n2;
	vector<string> email;
	vector<string> phone;
};
bool cmp(const info a, const info b)
{
	if (a.n2 == b.n2)
	{
		return a.n1 < b.n1;
	}
	return a.n2 < b.n2;
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	string tn1, tn2, t;
	int n;
	int no = 1;
	while (cin >> n)
	{
		if (n == 0)break;
		vector<info> v;

		for (int w = 0; w < n; w++)
		{
			cin >> tn1 >> tn2 >> t;
			bool flag = true;
			vector<info>::iterator iter = v.begin();
			while (iter != v.end())
			{
				if (tn1 == iter->n1 && tn2 == iter->n2)
				{
					flag = false;
					break;
				}
				iter++;
			}
			if (flag)
			{
				info _info;
				_info.n1 = tn1;
				_info.n2 = tn2;
				if (find(t.begin(), t.end(), '@') != t.end())
				{
					_info.email.push_back(t);
				}
				else
				{
					_info.phone.push_back(t);
				}
				v.push_back(_info);
			}
			else
			{
				if (find(t.begin(), t.end(), '@') != t.end())
				{
					iter->email.push_back(t);
				}
				else
				{
					iter->phone.push_back(t);
				}
			}

		}
		sort(v.begin(), v.end(), cmp);
		vector<info>::iterator iter = v.begin();
		cout << "Contact list #" << no++ << ":" << endl;
		for (; iter != v.end(); iter++)
		{
			
			cout << iter->n1 << " " << iter->n2 << endl;
			cout << "Phone:" << endl;
			sort(iter->phone.begin(), iter->phone.end());
			for (vector<string>::iterator s = iter->phone.begin(); s != iter->phone.end(); s++)
			{
				string pt = *s;
				cout << "(" << pt[0]<<pt[1]<<pt[2] << ")" << pt[3] << pt[4] << pt[5] << "-" << pt[6] << pt[7] << pt[8]<<pt[9] <<endl;
			}
			cout << "E-Mail:" << endl;
			sort(iter->email.begin(), iter->email.end());
			for (vector<string>::iterator s = iter->email.begin(); s != iter->email.end(); s++)
			{
				cout << *s << endl;
			}
			cout << "###" << endl;
		}
		cout << endl;
	}
	return 0;
}

