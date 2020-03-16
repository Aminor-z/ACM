//这题太经典了awa
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
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    while (cin >> n)
    {
        int t;
        vector<int> v,DP;
        for (int i = 0; i < n; i++)
        {
             cin >>t;
             v.push_back(t);
             DP.push_back(1);
        }
        //DP
        for(int i=1;i<n;i++)
            for (int j = i-1; j >= 0; j--)
            {
                if (v[j] >= v[i])DP[i] = max(DP[i], DP[j]+1);
            }
        //最长非递减链
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                int t = v[i];
                for(int j=i+1;j<n;j++)
                {
                    if (v[j] > 0 && v[j] <= t)
                    {
                        t = v[j];
                        v[j] = -1;
                    }
                }
                c++;
            }
        }
        cout << *max_element(DP.begin(), DP.end()) << " " << c<< endl;
    }
    return 0;
}