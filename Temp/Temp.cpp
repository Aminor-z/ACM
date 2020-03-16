#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
#include <stack>
#include <map>
using namespace std;
const int N = 2e6 + 5;
int a[N];
int main()
{
    int i, j, n;              
    cin >> n;


    if (n & 1)
    {
        j = n + 1;
        for (i = 1; i <= n; i++)
        {
            if (i&1)
            {
                a[i] = 2 * i - 1;
                a[j++] = 2 * i;
            }
            else
            {
                a[i] = 2 * i;
                a[j++] = 2 * i - 1;
                
            }
        }
        cout << "YES" << endl;
        for (i = 1; i <= 2 * n; i++)
        {
            if (i == 2 * n)
                cout << a[i] << endl;
            else
                cout << a[i] << ' ';
        }
    }
    else
    {
        cout << "NO" << endl;
        
    }
    return 0;
}
