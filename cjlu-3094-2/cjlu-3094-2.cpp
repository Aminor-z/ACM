#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
const long N = 2000000;
int ct=0;
long long tree[N+10];
inline void odd(long long n);
inline void even(long long n);
inline void big(long long n);
inline void normal(long long n);
inline void normal(long long n)
{
	if (n >= N)
	{
		big(n);
		return;
	}
	if (n == 1ll)
	{
		printf("%d steps in total.\n", ct);
		return;
	}
	long long t;
	if (n & (long long)1)
	{
		t = n * 3ll + 1ll;
		printf("%lld*3+1=%lld\n", n, t);
		tree[n] = t;
	}
	else
	{
		t = n >> 1;
		printf("%lld/2=%lld\n", n, t);
		tree[n] = t;
	}
	(t & (long long)1) ? odd(t) : even(t);
}
inline void big(long long n)
{
	ct++;
	long long t;
	if (n & (long long)1)
	{
		t = n * 3ll + 1ll;
		printf("%lld*3+1=%lld\n", n, t);
	}
	else
	{
		t = n >> 1;
		printf("%lld/2=%lld\n", n, t);
	}
	(t & (long long)1) ? odd(t) : even(t);
}
inline void odd(long long n)
{
	if (n >= N)
	{
		big(n);
		return;
	}
	if (n == 1ll)
	{
		printf("%d steps in total.\n",ct);
		return;
	}
	ct++;
	if (tree[n]!=-1ll) {
		printf("%lld*3+1=%lld\n", n, tree[n]);
		(tree[n] & (long long)1) ? odd(tree[n]) : even(tree[n]);
	}
	else
	{
		normal(n);
	}

}
inline void even(long long n)
{
	if (n >= N)
	{
		big(n);
		return;
	}
	if (n == 1ll)
	{
		printf("%d steps in total.\n", ct);
		return;
	}
	ct++;
	if (tree[n] != -1ll) {
		printf("%lld/2=%lld\n", n, tree[n]);
		(tree[n] & (long long)1) ? odd(tree[n]) : even(tree[n]);
	}
	else
	{
		normal(n);
	}
}
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	long long n;
	memset(tree, -1ll, sizeof(long long) * N);
	while (ct=0,cin >> n)
	{
		if (n == 0)break;
		(n & (long long)1)?odd(n) :even(n);
	}
	return 0;
}

