#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int main()
{
    char c;
    int count=0;
    while (scanf("%c", &c) != EOF)
    {
        if (c >= '0' && c<='9')count++;
    }
    cout << count << endl;
}

