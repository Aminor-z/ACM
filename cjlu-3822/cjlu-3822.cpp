#pragma warning(disable:4996)
#include <algorithm>
#include <map>
#include <math.h>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;
//大数据运算
class BigInt
{
	inline void fix(string& a, string& b)
	{

		if (a.length() > b.length())
		{
			int _p = a.length() - b.length();
			for (register int i = 0; i < _p; i++)
			{
				b = "0" + b;
			}
		}
		else
		{
			int _p = b.length() - a.length();
			for (register int i = 0; i < _p; i++)
			{
				a = "0" + a;
			}
		}
	}

	inline pair<unsigned short, char> charAdd(const char& a, const char& b)
	{
		unsigned short t = a - '0' + b - '0';
		return (t > 9) ? pair<unsigned short, char>(1, t - 10 + '0') : pair<unsigned short, char>(0, t + '0');
	}
	inline pair<short, char> charSub(const char& a, const char& b)
	{
		short t = a - b;
		return (t >= 0) ? pair<unsigned short, char>(0, t + '0') : pair<unsigned short, char>(1, (10 + t) + '0');
	}
public:
	BigInt()
	{
		this->num = "P";
	}
	BigInt(string num)
	{
		this->num = num;
	}
	string num;
	inline BigInt operator +(BigInt t)
	{
		fix(this->num, t.num);
		bool carry = 0;
		for (string::reverse_iterator iter = t.num.rbegin(), this_iter = this->num.rbegin();
			iter != t.num.rend();
			iter++, this_iter++)
		{
			pair<bool, char> _cA = charAdd(*iter, *this_iter + carry);
			*iter = _cA.second;
			carry = _cA.first;
		}
		return (carry) ? "1" + t.num : t.num;
	}
	inline BigInt operator -(BigInt t)
	{
		fix(this->num, t.num);
		bool sub = 0;
		for (string::reverse_iterator iter = t.num.rbegin(), this_iter = this->num.rbegin();
			iter != t.num.rend();
			iter++, this_iter++)
		{
			pair<short, char> _cS = charSub(*this_iter - sub, *iter);
			*iter = _cS.second;
			sub = _cS.first;
		}
		while (t.num[0] == '0')
		{
			t.num.erase(0, 1);
		}
		return (sub) ? "-" + t.num : t.num;
	}
	inline BigInt twice()
	{

		return BigInt(this->num) + BigInt(this->num);
	}
	inline BigInt pow2(const unsigned short& n)
	{
		BigInt t(this->twice().num);
		for (register unsigned short i = 1; i < n; i++)
		{
			t = t.twice().num;
		}
		return t;
	}
};
//大数据取小
BigInt min(const BigInt& a, const BigInt& b)
{
	if (a.num.length() > b.num.length())
		return b;
	else
		if (a.num.length() < b.num.length())
		{
			return a;
		}
		else
		{
			return (a.num < b.num) ? a : b;
		}
}
BigInt f[1665] = { BigInt("0"),BigInt("1") ,BigInt("3") };
BigInt POW2[1665] = { BigInt("1") };
BigInt step[1665] = { BigInt("1"),BigInt("2") };
inline void OLD_H4(const unsigned long long& n)
{
	if (n < 63)
		for (register unsigned long long i = 1; i < n; i++)
		{
			if (f[n].num != "P")
				f[n] = min(f[n], f[i].twice() + POW2[n - i] - BigInt("1"));
			else
				f[n] = f[i].twice() + POW2[n - i] - BigInt("1");
		}
	else
		for (register unsigned long long i = n - 10; i < n; i++)
		{

			if (f[n].num != "P")
				f[n] = min(f[n], f[i].twice() + POW2[n - i] - BigInt("1"));
			else
				f[n] = f[i].twice() + POW2[n - i] - BigInt("1");
		}
}
inline void OLD__H4(const unsigned long long& n)
{
	f[n] = f[n - 1] + step[n - 1];
}
unsigned long long p[1665] = { 0,1,3 };
unsigned long long _step[1665] = { 1,2 };
unsigned long long pow2[1665] = { 1, };
inline void OLD____H4(const unsigned long long& n)
{
	p[n] = p[n - 1] + _step[n - 1];
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	for (register int i = 1; i < 60; i++)
	{
		pow2[i] = pow2[i - 1] * 2;
	}
	register int w = 1, now = 2;
	for (register int i = 1; i < 1661;)
	{
		for (register int j = 1; j <= now; j++, i++)
		{
			_step[i] = pow2[w];
		}
		now++;
		w++;
	}
	for (register int i = 2; i < 1661; i++)
	{
		p[i] = p[i - 1] + _step[i - 1];
	}
	short n;
	while (cin >> n)
	{
		cout << p[n] << endl;
	}
	return 0;
}

