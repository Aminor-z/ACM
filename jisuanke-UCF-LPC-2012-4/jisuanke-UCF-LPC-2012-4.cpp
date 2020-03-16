#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
int space, set,p,l;
bool* isnew;int *num;
void moveNext() {
	
	(p == space) ? p = 1 : ++p;
}
int pro = 1;
int main()
{
	while (cin >> space >> set)
	{
		
		if (space == 0 || set == 0)break;
		printf("Program %d\n", pro++);
		isnew = new bool[space+1];
		memset(isnew, false, sizeof(bool) * (space+1));
		num = new int[space+1];
		memset(num, -1, sizeof(int) * (space + 1));
		p=1;
		l = 0;
		int i = 0,t;
		int pos = 1;
		int c = 0;
		for (i = 0; i < set; i++)
		{
			
			bool isfull = true;
			int freePos = -1;
			int finded=-1;
			cin >> t;
			for (int j = 1; j <= space; j++)
			{
				if (num[j] == -1)
				{
					isfull = false;
					freePos = j;
					break;
				}
				else
				{
					if (t == num[j])
					{
						finded = j;
					}
				}
			}
			if (finded != -1)
			{
				printf("Access page %d in cell %d.\n", t, finded);
				isnew[finded] = true;
			}
			else
			if (isfull) 
			{
				while (isnew[p])
				{
					isnew[p] = false;
					moveNext();
					
				}
				printf("Page %d loaded into cell %d.\n", t, p);
				num[p] = t;
				isnew[p] = true;
				moveNext();
				c++;
			}
			else
			{
				printf("Page %d loaded into cell %d.\n", t, freePos);
				num[freePos] = t;
				isnew[freePos] = true;
				c++;
			}
		}
		printf("There are a total of %d page faults.\n\n",c );
	}

	return 0;
}

