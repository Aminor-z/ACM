#pragma warning(disable:4996)
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
class Array
{
public:
	int* num;
	int capacity;
	int* head;

	inline int* begin()
	{
		return &num[0];
	}
	inline int* end() {
		return &num[0] + capacity - 1;
	}
	Array(const int& _capacity)
	{

		capacity = _capacity;
		num = new int[_capacity];
		head = num;
	}
	inline int* MoveRight()
	{
		return (head == begin()) ? head = end() : head--;
	}
	bool OutputAll()
	{
		register int* p;
		p = head;
		if (capacity == 1)return cout << *p, true;
		cout << *p << " ";
		(p == end()) ? p = begin() : p++;
		while (p != head)
		{
			if (head != begin())
			{
				if (p == head - 1)
					cout << *p;
				else cout << *p << " ";
			}
			else
			{
				if (p == end())
					cout << *p;
				else cout << *p << " ";
			}
			(p == end()) ? p = begin() : p++;
		}
		return true;
	}
};
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	register int N, M;
	while (cin >> N)
	{
		if (N == -1)break;
		Array A(N);
		register int i = 0;
		for (; i < N; i++)
		{
			cin >> A.num[i];
		}
		while (cin >> M)
		{
			if (M == 0)break;
			M %= N;
			for (i = 0; i < M; i++)
			{
				A.MoveRight();
			}
			A.OutputAll();
			cout << endl;
		}
	}
	return 0;

}

