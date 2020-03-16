#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int main()
{
    string max = "", min = "                                        ", now;
    while (cin >> now)
    {
        if (now.length() > max.length())max = now;
        if (now.length() < min.length())min = now;
    }
    cout << max << endl << min << endl;
}

