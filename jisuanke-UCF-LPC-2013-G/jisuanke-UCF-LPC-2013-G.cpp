#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;


int main()
{
	int n;
	cin >> n;
	for (int w = 1; w <= n; w++)
	{
		int set;
		cin >> set;
		char* s=new char[300];
		cin.getline(s, 200);
		s = new char[200];
		vector<string> location;
		for (int i = 0; i < set; i++)
		{
			s = new char[200];
			cin.getline(s, 200);
			string t = s;
			location.push_back(t);
		}
		cin >> set;
		vector<string> message;
		for (int i = 0; i <= set; i++)
		{
			s = new char[200];
			cin.getline(s, 200);
			string t = s;
			message.push_back(t);
		}
		cout << "Brett Log #" << w << ":" << endl;
		string now="";
		for(vector<string>::iterator iter_m=message.begin();iter_m!=message.end();iter_m++)
			for (vector<string>::iterator iter_l = location.begin(); iter_l != location.end(); iter_l++)
			{

				if (iter_m->find(*iter_l) != iter_m->npos&&now!=*iter_l)
				{
					now = *iter_l;
					cout << "   " << *iter_m << endl;
				}
			}
		cout << endl;
	}
	return 0;
}

